using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Snowhead : MonoBehaviour {

	float bottomBound;
	public float rotationSpeed;
	public Transform spriteObj;

	// Use this for initialization
	void Start ()
	{
		spriteObj = transform.Find("sprite");

		//Get bounds
		bottomBound = EnemyManager.Instance.bottomBound;

		float midBound = EnemyManager.Instance.midBound;
		float topBound = EnemyManager.Instance.topBound;

		//Calculate starting force and position
		float dir = Random.Range(0f, 1f);
		Vector2 force;

		Vector2 position;
		//Left
		if(dir < 0.5f)
		{
			float leftBound = EnemyManager.Instance.leftBound;
			position = new Vector2(Random.Range(leftBound, midBound), topBound);
			force = new Vector2(50, 0);
			rotationSpeed = -rotationSpeed;
		}
		//Right
		else
		{
			float rightBound = EnemyManager.Instance.rightBound;
			position = new Vector2(Random.Range(midBound, rightBound), topBound);
			force = new Vector2(-50, 0);
		}

		transform.position = position;

		GetComponent<Rigidbody2D>().AddForce(force);
	}
	
	// Update is called once per frame
	void Update () {
		Constrain();

		spriteObj.Rotate(Vector3.forward, 5 * rotationSpeed * Time.deltaTime);
	}

	//Constrain object to camera bounds
	void Constrain()
	{
		if (transform.position.y < bottomBound - 2)
		{
			EnemyManager.Instance.enemies.Remove(transform);
			Destroy(gameObject);
		}
	}

}
