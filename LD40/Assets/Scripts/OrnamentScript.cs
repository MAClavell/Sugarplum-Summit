using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrnamentScript : MonoBehaviour {

	public float health;
	Vector2 position;
	public float speed;
	public float bottomBound;
	public ParticleSystem hurtParticles;
	public ParticleSystem breakParticles;

	// Use this for initialization
	void Start () {
		position = transform.position;
		bottomBound = EnemyManager.Instance.bottomBound;
	}
	
	// Update is called once per frame
	void Update () {
		position.y -= speed * Time.deltaTime;
		transform.position = position;

		if (health < 0)
		{
			GameObject.FindGameObjectWithTag("Player").GetComponent<Player>().CreateMinion(transform.position);
			breakParticles.transform.parent = null;
			breakParticles.Play();
			Destroy(breakParticles.gameObject, 1);
			Destroy(gameObject);
		}

		Constrain();
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		if (collision.tag == "Bullet")
		{
			health -= 1;
			Destroy(collision.gameObject);
			hurtParticles.Play();
		}
	}

	//Constrain object to camera bounds
	void Constrain()
	{
		if (position.y < bottomBound - 2)
		{
			EnemyManager.Instance.enemies.Remove(transform);
			Destroy(gameObject);
		}
	}
}
