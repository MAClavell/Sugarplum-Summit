using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum MoveState{Left, None, Right }

public class Player : MonoBehaviour {

	//Movement vars
	public float moveSpeed;
	Vector2 position;
	public Transform constraintPlane;
	float leftBound;
	float rightBound;
	float topBound;
	float bottomBound;
	public MoveState moveState;
	Quaternion rotation;
	public float rotationAngle;
	public float rotationSpeed;

	//Health vars
	public int lives;

	//Damage vars
	public bool invincible;
	float invinTimer;
	public AudioClip hurtSound;

	//Shooting vars
	public GameObject bulletPrefab;
	public float shootInterval;
	public float bulletSpeed;
	float shootTimer;
	public ParticleSystem hurtParticles;

	//Minion vars
	public GameObject minionPrefab;
	IFollowable followAtt;
	public AudioClip joinSound;

	//Sprite vars
	Transform spriteObj;
	SpriteRenderer sprite;

	public bool Dead
	{
		get { return lives < 0; }
	}

	// Use this for initialization
	void Start() {
		position = transform.position;
		invincible = false;

		followAtt = transform.GetComponent<IFollowable>();
		moveState = MoveState.None;
		rotationAngle = rotationAngle * Mathf.Deg2Rad;

		//Get sprite things
		spriteObj = transform.Find("sprite");
		sprite = spriteObj.GetComponent<SpriteRenderer>();

		//Get bounds
		topBound = constraintPlane.GetComponent<Collider>().bounds.max.y;
		bottomBound = constraintPlane.GetComponent<Collider>().bounds.min.y;
		rightBound = constraintPlane.GetComponent<Collider>().bounds.max.x;
		leftBound = constraintPlane.GetComponent<Collider>().bounds.min.x;
	}

	// Update is called once per frame
	void Update() {
		if (!Dead)
		{

			Shoot();
			Movement();
			Constrain();
			Rotate();

			if (invincible)
			{
				Hit();
			}
		}
		if(Dead && GameManager.Instance.gameOver != true)
		{
			GameManager.Instance.SetGameOver("Fall of the Sugar Plum Fairy");
		}
	}

	//Movement controls
	void Movement()
	{
		position = transform.position;

		if (followAtt.move == true) followAtt.move = false;

		if (Input.GetAxis("Vertical") > 0)
		{
			position.y += moveSpeed * Time.deltaTime;
			followAtt.move = true;
		}
		else if (Input.GetAxis("Vertical") < 0)
		{
			position.y -= moveSpeed * Time.deltaTime;
			followAtt.move = true;
		}

		if (Input.GetAxis("Horizontal") < 0)
		{
			position.x -= moveSpeed * Time.deltaTime;
			followAtt.move = true;
			if (moveState != MoveState.Left)
			{
				moveState = MoveState.Left;
			}
		}
		else if (Input.GetAxis("Horizontal") > 0)
		{
			position.x += moveSpeed * Time.deltaTime;
			followAtt.move = true;
			if (moveState != MoveState.Right)
			{
				moveState = MoveState.Right;
			}
		}
		else if (moveState != MoveState.None)
		{
			moveState = MoveState.None;
		}

		transform.position = position;
	}

	//Rotate the player based on movement
	void Rotate()
	{
		rotation = transform.rotation;
		if (moveState == MoveState.Right)
		{
			if(rotation.z > -rotationAngle)
			{
				rotation.z -= rotationSpeed * Time.deltaTime;
			}
		}
		else if (moveState == MoveState.Left)
		{
			if (rotation.z < rotationAngle)
			{
				rotation.z += rotationSpeed * Time.deltaTime;
			}
		}
		else
		{
			if (rotation.z > 0)
			{
				rotation.z -= rotationSpeed * Time.deltaTime;
			}
			else if (rotation.z < 0)
			{
				rotation.z += rotationSpeed * Time.deltaTime;
			}
		}
		transform.rotation = rotation;
	}

	//Shooting control
	void Shoot()
	{
		if (!Dead)
		{
			shootTimer -= Time.deltaTime;
			if (shootTimer < 0)
			{
				shootTimer = shootInterval;
				Transform bullet = Instantiate(bulletPrefab).transform;
				bullet.GetComponent<BulletScript>().Create(transform.Find("Shoot_Point").position, bulletSpeed, false, Vector2.zero);
			}
		}
	}

	//Getting hit logic/iframes
	void Hit()
	{
		//Tick down invincibility
		if (invinTimer > 0)
		{
			invinTimer -= Time.deltaTime;
		}
		//3 seconds of invinciblity
		if (invincible && invinTimer < 0)
		{
			invincible = false;
			CancelInvoke("BlinkSpriteHurt");
			sprite.color = Color.white;
		}
	}

	//Constrain player to bounds
	void Constrain()
	{
		//Horizontal
		if(position.x < leftBound)
		{
			position.x = leftBound;
			if (moveState != MoveState.Left)
			{
				moveState = MoveState.None;
			}
		}
		else if(position.x > rightBound)
		{
			position.x = rightBound;
			if (moveState != MoveState.Right)
			{
				moveState = MoveState.None;
			}
		}

		//Vertical
		if (position.y < bottomBound)
		{
			position.y = bottomBound;
		}
		else if (position.y > topBound)
		{
			position.y = topBound;
		}

		//Set position
		transform.position = position;
	}

	//Minion creation
	public void CreateMinion(Vector3 position)
	{
		Transform minion = Instantiate(minionPrefab).transform;
		Transform followTarget;
		List<Transform> minions = BossManager.Instance.minions;
		if (minions.Count == 0)
		{
			followTarget = transform;
		}
		else followTarget = minions[minions.Count - 1];
		minion.GetComponent<Minion>().Create(position, followTarget, transform);
		BossManager.Instance.minions.Add(minion);
		Camera.main.GetComponent<AudioSource>().PlayOneShot(joinSound);
	}

	//Collision detection
	private void OnTriggerEnter2D(Collider2D collision)
	{
		if ((collision.tag == "Enemy" || collision.tag == "BulletEnemy" | collision.tag == "Boss") && !invincible && !Dead)
		{
			InvokeRepeating("BlinkSpriteHurt", 0, 0.1f);
			invinTimer = 1f;
			lives -= 1;
			GameManager.Instance.CameraShake(0.1f, 0.1f);
			Camera.main.GetComponent<AudioSource>().PlayOneShot(hurtSound);
			hurtParticles.Play();
			if (lives >= 0)
			{
				invincible = true;
				GameManager.Instance.UIRemoveLife();
			}
		}
	}

	/// <summary>
	/// Blink the sprite between red and white colors. Meant to be used with InvokeRepeating
	/// </summary>
	public void BlinkSpriteHurt()
	{
		if (sprite.color == Color.white)
		{
			sprite.color = Color.red;
		}
		else if (sprite.color == Color.red)
		{
			sprite.color = Color.white;
		}
	}
}
