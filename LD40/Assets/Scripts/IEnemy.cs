using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EnemyStates { Enter, Fight, Dead }

public class IEnemy : MonoBehaviour {

	public int health;
	public bool killable;
	public bool deathAnimation;
	public bool deathSound;
	public AnimationClip hurtAnim;
	public AnimationClip deathAnim;
	public AudioClip deathSoundClip;
	public ParticleSystem hurtParticles;
	Animator animator;
	public bool startDead;

	public bool Dead
	{
		get { return health < 0; }
	}

	// Use this for initialization
	void Start () {
		animator = GetComponentInChildren<Animator>();
		startDead = false;
	}
	
	// Update is called once per frame
	void Update () {
		if(killable && health < 0 && startDead)
		{
			startDead = false;
			EnemyManager.Instance.enemies.Remove(transform);
			if(transform.name == "Gingerbad(Clone)")
			{
				GetComponent<Gingerbad>().Split();
			}
			if(deathSound)
			{
				Camera.main.GetComponent<AudioSource>().PlayOneShot(deathSoundClip);
			}
			if (deathAnimation)
			{
				animator.Play(deathAnim.name);
				Destroy(gameObject, deathAnim.length);
			}
			else Destroy(gameObject);
		}
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		if(!Dead && killable && collision.tag == "Bullet")
		{
			health -= 1;
			Destroy(collision.gameObject);
			animator.Play(hurtAnim.name);
			hurtParticles.Play();
			startDead = true;
		}
	}
}
