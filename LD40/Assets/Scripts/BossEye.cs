using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossEye : MonoBehaviour {

	public int health;
	public ParticleSystem hurtParticles;
	public Sprite hurtSpriteEye;
	public Sprite hurtSpritePupil;
	SpriteRenderer sprite;
	SpriteRenderer spritePupil;
	public AudioClip hurtSound;
	public AudioClip deathSound;

	public bool Dead
	{
		get { return health < 0; }
	}

	// Use this for initialization
	void Start () {
		sprite = transform.Find("sprite").GetComponent<SpriteRenderer>();
		spritePupil = transform.Find("sprite_pupil").GetComponent<SpriteRenderer>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//Change the eye to dead visually
	private void ChangeToDead()
	{
		sprite.sprite = hurtSpriteEye;
		spritePupil.sprite = hurtSpritePupil;
		spritePupil.transform.localScale = new Vector3(2.5f, 1.5f, 2.5f);
		Camera.main.GetComponent<AudioSource>().PlayOneShot(deathSound);
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		if (BossManager.Instance.state == BossStates.Fight && collision.tag == "Bullet" && health >= 0)
		{
			health -= 1;
			hurtParticles.Play();
			Destroy(collision.gameObject);
			Camera.main.GetComponent<AudioSource>().PlayOneShot(hurtSound);
			if (Dead)
			{
				ChangeToDead();
			}
		}
	}
}
