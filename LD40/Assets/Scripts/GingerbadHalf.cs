using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GingerbadHalf : MonoBehaviour {

	//Fields
	public EnemyStates state;
	Vector2 position;
	Transform player;
	Vector2 target;
	public float moveSpeed;
	float bottomBound;

	//Falling vars
	public int direction;
	public int timeUntilSeek;
	float fallTime;
	Vector2 desiredVelocity;
	public float rotationSpeed;

	// Use this for initialization
	void Start () {
		state = EnemyStates.Enter;
		player = EnemyManager.Instance.player;

		fallTime = timeUntilSeek;
		position = transform.position;
		bottomBound = EnemyManager.Instance.bottomBound;
		desiredVelocity = Vector2.zero;

		GetComponent<Rigidbody2D>().AddForce(new Vector2(50 * direction, 0));
	}
	
	// Update is called once per frame
	void Update () {
		position = transform.position;
		if(state == EnemyStates.Enter)
		{
			fallTime -= Time.deltaTime;

			transform.Rotate(Vector3.forward, 180 * -direction * Time.deltaTime);

			if (fallTime < 0)
			{
				state = EnemyStates.Fight;
				target = player.position;
			}
		}
		else if(state == EnemyStates.Fight)
		{
			if (position.y > target.y)
			{
				Vector2 lerped = Vector2.Lerp(target, position, 0.5f);
				desiredVelocity = (new Vector2(lerped.x - position.x, lerped.y - position.y)).normalized * moveSpeed;
			}

			transform.Rotate(Vector3.forward, 20 * desiredVelocity.x * Time.deltaTime);

			position.x += desiredVelocity.x * Time.deltaTime;
			transform.position = position;
		}
		Constrain();
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
