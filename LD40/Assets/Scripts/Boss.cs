﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boss : MonoBehaviour {

	//Fields
	public Transform[] eyes; //0=left, 1=right
	Animator[] eyePupils;
	public EnemyStates state;
	public int health;
	Transform player;
	public GameObject laserPrefab;
	public AnimationClip bossDeathAnim;

	//Whether any eyes are alive
	int EyesAlive
	{
		get
		{
			int e = 0;
			foreach (Transform eye in eyes)
			{
				if (!eye.GetComponent<BossEye>().Dead) { e++; }
			}
			return e;
		}
	}

	//Whether the boss is dead
	public bool Dead
	{
		get
		{
			return health < 0;
		}
	}

	// Use this for initialization
	void Start () {
		state = EnemyStates.Enter;
		player = GameObject.Find("Player").transform;
		eyePupils = new Animator[2];
		eyePupils[0] = eyes[0].Find("sprite_pupil").GetComponent<Animator>();
		eyePupils[1] = eyes[1].Find("sprite_pupil").GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
		if(state == EnemyStates.Fight)
		{
			if(Dead)
			{
				state = EnemyStates.Dead;
			}
		}
		else if(state == EnemyStates.Dead)
		{
			
		}

	}

	public void StartAttacks()
	{
		StartCoroutine(Attack());
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		if(BossManager.Instance.state == BossStates.Fight && EyesAlive == 0 && collision.tag == "Bullet" && !Dead)
		{
			health -= 1;
			Destroy(collision.gameObject);
			if(Dead)
			{
				Kill();
			}
		}
	}

	//Attacking logic
	IEnumerator Attack()
	{
		while (EyesAlive == 2)
		{
			IntervalAttack();
			yield return new WaitForSeconds(1f);
		}

		while (EyesAlive == 1)
		{
			IntervalAttack();
			yield return new WaitForSeconds(0.5f);
		}

		while (health > 150)
		{
			HomingAttack();
			yield return new WaitForSeconds(0.4f);
		}

		while (health > 0)
		{
			LaserAttack();
			yield return new WaitForSeconds(0f);
		}
	}


	bool intervalTurn = true;
	int intervalAmount = 0;
	void IntervalAttack()
	{
		//Side minions shoot
		if(intervalTurn && intervalAmount < 3)
		{
			SideMinionsShoot(true, true);
			intervalAmount++;
		}
		else if(!intervalTurn && intervalAmount < 3)
		{
			CenterMinionsShoot(true, true);
			intervalAmount++;
		}

		if(intervalAmount >= 3)
		{
			intervalTurn = !intervalTurn;
			intervalAmount = 0;
		}
	}

	int homing = 3;
	bool homingTurn = false;
	int homingAmount = 0;
	void HomingAttack()
	{
		if(homing >= 3)
		{
			SideMinionsShootHoming(true, true, player.position);
			homing = 0;
		}

		//Side minions shoot
		if (homingTurn && homingAmount < 3)
		{
			CenterMinionsShoot(false, true);
			homingAmount++;
		}
		else if (!homingTurn && homingAmount < 3)
		{
			CenterMinionsShoot(true, false);
			homingAmount++;
		}

		if (homingAmount >= 3)
		{
			homingTurn = !homingTurn;
			homingAmount = 0;
			homing++;
		}
	}

	//laser state
	//0 = wait
	//1 = eyes
	//2 = spawn laser
	//3 = rotate laser
	int laserState = 0;
	float laserTimer = 2;
	float laserEyeDelay = 2;
	float laserWaitDelay = 2;
	float laserDelay = 3;
	float laserRotateDelay = 0.7f;
	float laserAngle = 0;
	Transform laser;
	int laserDir = 3;
	public float laserRotationSpeed;
	bool laserPlayedAnim = true;
	float laserMinionTimer = 2;
	void LaserAttack()
	{
		laserMinionTimer -= Time.deltaTime;
		//Minion logic
		if(laserMinionTimer < 0)
		{
			int min1 = Random.Range(0, BossManager.Instance.minions.Count- 1);
			int min2 = Random.Range(0, BossManager.Instance.minions.Count - 1);
			while(min2 == min1)
			{
				min2 = Random.Range(0, BossManager.Instance.minions.Count - 1);
			}
			MinionShootHoming(min1, player.position);
			MinionShootHoming(min2, player.position);
			laserMinionTimer = 2;
		}

		//Waiting
		if (laserState == 0)
		{
			laserTimer -= Time.deltaTime;
			//Move eyes
			if (laserDir == 1 && !laserPlayedAnim)
			{
				eyePupils[0].Play("BossLeft_LeftLookCenter");
				eyePupils[1].Play("BossRight_LeftLookCenter");
				laserPlayedAnim = true;
			}
			else if (laserDir == 0 && !laserPlayedAnim)
			{
				eyePupils[0].Play("BossLeft_RightLookCenter");
				eyePupils[1].Play("BossRight_RightLookCenter");
				laserPlayedAnim = true;
			}
			if (laserTimer < 0)
			{
				laserState = 1;
				laserTimer = laserEyeDelay;

				//Generate direction of laser
				laserDir = Random.Range(0, 2);
				laserPlayedAnim = false;
			}
		}
		//Eye warning
		else if (laserState == 1)
		{
			laserTimer -= Time.deltaTime;
			//Move eyes
			if (laserDir == 1 && !laserPlayedAnim)
			{
				eyePupils[0].Play("BossLeft_LookLeft");
				eyePupils[1].Play("BossRight_LookLeft");
				laserPlayedAnim = true;
			}
			else if (laserDir == 0 && !laserPlayedAnim)
			{
				eyePupils[0].Play("BossLeft_LookRight");
				eyePupils[1].Play("BossRight_LookRight");
				laserPlayedAnim = true;
			}
			if (laserTimer < 0)
			{
				laserState = 2;
				laserTimer = laserRotateDelay;
				laser = Instantiate(laserPrefab, transform.Find("moutch_sprite").position, Quaternion.identity).transform;
				laserAngle = 0;
				laserPlayedAnim = false;
			}
		}
		//Laser spawning
		else if (laserState == 2)
		{
			laserTimer -= Time.deltaTime;
			if (laserTimer < 0)
			{
				laserState = 3;
				laserTimer = laserDelay;
			}
		}
		//Laser rotating
		else if (laserState == 3)
		{
			laserTimer -= Time.deltaTime;
			if (laserTimer < 0)
			{
				laserState = 0;
				laserTimer = laserWaitDelay;
				Destroy(laser.gameObject);
			}

			//Left
			if (laserDir == 0)
			{
				if (!(laser.rotation.z < -90))
				{
					laserAngle += laserRotationSpeed * Time.deltaTime;
					laser.rotation = Quaternion.Euler(0, 0, laserAngle);
				}
			}
			//Right
			else if (laserDir == 1)
			{
				if (!(laser.rotation.z > 90))
				{
					laserAngle -= laserRotationSpeed * Time.deltaTime;
					laser.rotation = Quaternion.Euler(0, 0, laserAngle);
				}
			}
		}
	}

	//Have the side minions shoot a bullet based on input
	void SideMinionsShoot(bool leftMinions, bool rightMinions)
	{
		for(int i = 10; i < 16; i++)
		{
			if (i < BossManager.Instance.minions.Count)
			{
				Minion m = BossManager.Instance.minions[i].GetComponent<Minion>();
				if(i%2 == 0 && leftMinions)
				{
					m.Shoot();
				}
				else if (!(i%2 == 0) && rightMinions)
				{
					m.Shoot();
				}
			}
		}
	}

	//Have the side minions shoot a bullet based on input
	void SideMinionsShootHoming(bool leftMinions, bool rightMinions, Vector2 target)
	{
		for (int i = 10; i < 16; i++)
		{
			if (i < BossManager.Instance.minions.Count)
			{
				Minion m = BossManager.Instance.minions[i].GetComponent<Minion>();
				if (i % 2 == 0 && leftMinions)
				{
					m.Shoot(target);
				}
				else if (!(i % 2 == 0) && rightMinions)
				{
					m.Shoot(target);
				}
			}
		}
	}

	//Have the center minions shoot a bullet based on input
	void CenterMinionsShoot(bool leftMinions, bool rightMinions)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i < BossManager.Instance.minions.Count)
			{
				Minion m = BossManager.Instance.minions[i].GetComponent<Minion>();
				if (i % 2 == 0 && leftMinions)
				{
					m.Shoot();
				}
				else if (!(i % 2 == 0) && rightMinions)
				{
					m.Shoot();
				}
			}
		}
	}

	//Have the center minions shoot a bullet based on input
	void CenterMinionsShoot(bool leftMinions, bool rightMinions, Vector2 target)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i < BossManager.Instance.minions.Count)
			{
				Minion m = BossManager.Instance.minions[i].GetComponent<Minion>();
				if (i % 2 == 0 && leftMinions)
				{
					m.Shoot(target);
				}
				else if (!(i % 2 == 0) && rightMinions)
				{
					m.Shoot(target);
				}
			}
		}
	}

	void Kill()
	{
		if (laser != null)
		{
			Destroy(laser);
		}
		transform.Find("moutch_sprite").GetComponent<Animator>().Play("Boss_MoutchDeath");
		//GetComponent<Animator>().Play(bossDeathAnim.name);
		Destroy(gameObject, bossDeathAnim.length);
	}

	//Have the minion at the specified index shoot
	void MinionShootHoming(int index, Vector2 target)
	{
		if(index < BossManager.Instance.minions.Count)
		{
			BossManager.Instance.minions[index].GetComponent<Minion>().Shoot(target);
		}
	}
}
