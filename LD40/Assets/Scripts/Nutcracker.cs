using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Nutcracker : MonoBehaviour {

	//Fields
	public float speed;
	public Vector2 position;
	float bottomBound;
	float floatTimer;
	public EnemyStates state;
	float yPosEnter;
	float dir;

	//Shooting vars
	public GameObject bulletPrefab;
	public float shootInterval;
	public float bulletSpeed;
	float shootTimer;

	// Use this for initialization
	void Start()
	{
		state = EnemyStates.Enter;
		position = new Vector2(0, EnemyManager.Instance.topBound);
		transform.position = position;
		floatTimer = 0;
		bottomBound = EnemyManager.Instance.bottomBound;
		yPosEnter = Random.Range(EnemyManager.Instance.topBound - 4f, EnemyManager.Instance.topBound - 8f);

		//Get direction
		if (Random.value < 0.5f)
		{
			dir = -1;
		}
		else dir = 1;
	}

	// Update is called once per frame
	void Update()
	{
		position = transform.position;
		floatTimer += Time.deltaTime;

		//Move the gingerbad to the starting y position
		if (state == EnemyStates.Enter)
		{
			position.y -= Mathf.Abs(speed) * Time.deltaTime;
			if (position.y < yPosEnter)
			{
				state = EnemyStates.Fight;
			}
		}
		else if(state == EnemyStates.Fight)
		{
			position.y += (Mathf.Sin(floatTimer * 4) * 2)* Time.deltaTime;
			Shoot();
		}

		position.x += dir * (Mathf.Cos(floatTimer) * 4)*Time.deltaTime;
		transform.position = position;

		Rotate();
		Constrain();
	}

	void Rotate()
	{
		transform.rotation = Quaternion.Euler(0, 0, -(dir * (Mathf.Cos(floatTimer) * 400) * Time.deltaTime));
	}

	//Shooting control
	void Shoot()
	{
		shootTimer -= Time.deltaTime;
		if (shootTimer < 0)
		{
			shootTimer = shootInterval;
			Transform bullet = Instantiate(bulletPrefab).transform;
			bullet.GetComponent<BulletScript>().Create(transform.Find("Shoot_Point").position, bulletSpeed, false, Vector2.zero);
		}
	}

	//Constrain object to camera bounds
	void Constrain()
	{
		if (position.y < bottomBound - 5)
		{
			EnemyManager.Instance.enemies.Remove(this.transform);
			Destroy(gameObject);
		}
	}
}
