using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour {

	//Fields
	public float speed;
	public Vector2 position;
	float topBound;
	float bottomBound;

	public bool homing;
	public Vector2 velocity;

	// Use this for initialization
	void Start () {
		topBound = EnemyManager.Instance.topBound;
		bottomBound = EnemyManager.Instance.bottomBound;
	}

	// Update is called once per frame
	void Update()
	{
		if (homing)
		{
			position += velocity * Time.deltaTime;
		}
		else
		{
			position.y += speed * Time.deltaTime;
		}
		transform.position = position;

		Constrain();
	}

	public void Create(Vector2 pos, float speed, bool homing, Vector2 target)
	{
		position = pos;
		transform.position = position;
		this.speed = speed;
		this.homing = homing;
		velocity = (target - pos).normalized * Mathf.Abs(speed);
	}

	//Constrain object to camera bounds
	void Constrain()
	{
		if (position.y > topBound+1)
		{
			Destroy(gameObject);
		}

		if (position.y < bottomBound - 1)
		{
			Destroy(gameObject);
		}
	}
}
