using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gingerbad : MonoBehaviour {

	//Fields
	public float speed;
	public Vector2 position;
	float leftBound;
	float rightBound;
	public EnemyStates state;
	float yPosEnter;
	public GameObject[] halfPrefabs;
	float wiggleTimer;
	public float wiggleSpeed;
	public float wiggleLimit;
	public MoveState moveState;

	//Shooting vars
	public GameObject bulletPrefab;
	public float shootInterval;
	public float bulletSpeed;
	float shootTimer;
	Transform player;
	public AudioClip shootSoundClip;

	// Use this for initialization
	void Start () {
		state = EnemyStates.Enter;

		position = new Vector2(0, EnemyManager.Instance.topBound);
		transform.position = position;

		moveState = MoveState.Left;
		wiggleTimer = 0;
		player = EnemyManager.Instance.player;

		leftBound = EnemyManager.Instance.leftBound;
		rightBound = EnemyManager.Instance.rightBound;

		yPosEnter = Random.Range(EnemyManager.Instance.topBound - 4f, EnemyManager.Instance.topBound - 9f);
	}
	
	// Update is called once per frame
	void Update () {
		position = transform.position;

		//Move the gingerbad to the starting y position
		if (state == EnemyStates.Enter)
		{
			position.y -= Mathf.Abs(speed) * Time.deltaTime;
			if (position.y < yPosEnter)
			{
				state = EnemyStates.Fight;
			}
		}
		else if (state == EnemyStates.Fight)
		{
			Shoot();
		}
		position.x += speed * Time.deltaTime;
		transform.position = position;
		Wiggle();
		Constrain();
	}

	//Wiggle the gingerbad back and forth
	public void Wiggle()
	{
		wiggleTimer += Time.deltaTime;
		transform.rotation = Quaternion.Euler(0, 0, Mathf.Sin(wiggleTimer * (wiggleSpeed))*wiggleLimit);
	}

	//Shooting control
	void Shoot()
	{
		shootTimer -= Time.deltaTime;
		if (shootTimer < 0)
		{
			shootTimer = shootInterval;
			Transform bullet = Instantiate(bulletPrefab).transform;
			bullet.GetComponent<BulletScript>().Create(transform.Find("Shoot_Point").position, bulletSpeed, true, player.position);
			Camera.main.GetComponent<AudioSource>().PlayOneShot(shootSoundClip);
		}
	}

	//Split the gingerbad into two parts
	public void Split()
	{
		//Left half
		EnemyManager.Instance.enemies.Add(Instantiate(halfPrefabs[0], transform.position, Quaternion.identity).transform);

		//Right half
		EnemyManager.Instance.enemies.Add(Instantiate(halfPrefabs[1], transform.position, Quaternion.identity).transform);
	}

	//Constrain to left and right bounds
	void Constrain()
	{
		if (position.x < leftBound)
		{
			speed = -speed;
			position.x = leftBound;
			transform.position = position;
		}
		if(position.x > rightBound)
		{
			speed = -speed;
			position.x = rightBound;
			transform.position = position;
		}
	}
}
