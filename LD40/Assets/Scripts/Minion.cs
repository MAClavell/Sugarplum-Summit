using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum MinionStates { Good, Bad}

public class Minion : MonoBehaviour {

	public MinionStates goodBadState;
	public EnemyStates bossState;
	public Transform player;
	BossManager bossManager;

	//Good vars

	//Movement vars
	public float moveSpeed;
	Vector2 position;
	Transform followTarget;
	Vector2 followPosition;
	IFollowable followAtt;

	//Follow timer
	float followTimer;


	//Shooting vars
	public GameObject bulletPrefab;
	public float shootInterval;
	public float bulletSpeed;
	float shootTimer;

	//Bad vars
	public Vector2 formationPosition;
	public GameObject evilBulletPrefab;
	public ParticleSystem deathParticles;
	public AudioClip deathSound;

	public bool AtFormationPosition
	{
		get
		{
			return ((formationPosition - (Vector2)transform.position).sqrMagnitude < 0.01f);
		}
	}

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update() {
		//Grab position
		position = transform.position;

		//SHMUP level
		if (goodBadState == MinionStates.Good)
		{
			if (bossManager.state == BossStates.Reveal && !bossManager.wait)
			{
				if (GameManager.Instance.state == GameState.SHMUP)
				{
					SHMUPShoot();
				}
				//if (followAtt.move)
				//{
					followTimer -= Time.deltaTime;
					if (followTimer < 0)
					{
						followPosition = followTarget.position;
						followTimer = 0.1f;
					}
					Vector2 lerped = Vector2.Lerp(followPosition, position, 0.5f);
					Vector2 desiredVelocity = (new Vector3(lerped.x - position.x, lerped.y - position.y)).normalized * moveSpeed;

				//Add velocity and set position
				position += desiredVelocity * Time.deltaTime;
				//}	

				//if (followAtt.move)
				//{
				//	//Get position inbetween target and me
				//	Vector2 lerped = Vector2.Lerp(followTarget.position, position, 0.5f);
				//	Vector2 desiredVelocity = (new Vector3(lerped.x - position.x, lerped.y - position.y)).normalized * moveSpeed;

				//	//Add velocity and set position
				//	position += desiredVelocity * Time.deltaTime;
				//}
				transform.position = position;
			}
		}
		else
		{
			if(bossState == EnemyStates.Fight)
			{

			}
		}

		//Final boss
		if (!bossManager.minionsTurned)
		{
			if(bossManager.state == BossStates.Formation && !bossManager.wait)
			{
				SeekFormationPos();
			}
		}
	}

	//Create the minion with vars
	public void Create(Vector2 pos, Transform followTarget, Transform player) {
		position = pos;
		transform.position = position;
		this.followTarget = followTarget;
		this.player = player;

		followAtt = GetComponent<IFollowable>();
		GetComponent<IFollowable>().leader = followTarget.GetComponent<IFollowable>();
		followPosition = followTarget.position;

		goodBadState = MinionStates.Good;
		bossState = EnemyStates.Enter;
		bossManager = BossManager.Instance;
	}

	//Shooting control
	void SHMUPShoot()
	{
		shootTimer -= Time.deltaTime;
		if (shootTimer < 0)
		{
			shootTimer = shootInterval;
			Transform bullet = Instantiate(bulletPrefab).transform;
			bullet.GetComponent<BulletScript>().Create(transform.Find("Shoot_Point").position, bulletSpeed, false, Vector2.zero);
		}
	}

	/// <summary>
	/// Shoot a bullet
	/// </summary>
	public void Shoot()
	{
		Transform bullet = Instantiate(evilBulletPrefab).transform;
		bullet.GetComponent<BulletScript>().Create(transform.Find("Shoot_Point").position, -bulletSpeed, false, Vector2.zero);
	}

	/// <summary>
	/// Shoot a homing bullet at a target
	/// </summary>
	public void Shoot(Vector2 target)
	{
		Transform bullet = Instantiate(evilBulletPrefab).transform;
		bullet.GetComponent<BulletScript>().Create(transform.Find("Shoot_Point").position, -bulletSpeed, true, target);
	}

	public void SeekFormationPos()
	{
		if (!AtFormationPosition)
		{
			Vector2 desiredVelocity = (new Vector3(formationPosition.x - position.x, formationPosition.y - position.y)).normalized * moveSpeed;

			//Add velocity and set position
			position += desiredVelocity * Time.deltaTime;
			transform.position = position;
		}
		else position = formationPosition;
	}

	public void Destroy()
	{
		Destroy(gameObject);
		deathParticles.Play();
		deathParticles.transform.parent = null;
		Camera.main.GetComponent<AudioSource>().PlayOneShot(deathSound);
		Destroy(deathParticles.gameObject, 1f);
	}
}
