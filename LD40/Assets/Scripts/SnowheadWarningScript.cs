using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnowheadWarningScript : MonoBehaviour {

	Transform snowhead;
	SpriteRenderer snowheadSprite;
	SpriteRenderer borderSprite;
	public Transform snowheadGO;
	public Transform snowheadGOSprite;

	float topBound;
	float startBound;
	float percent;
	float transAmount;
	Color color;
	public AudioClip warningSoundClip;

	// Use this for initialization
	void Start () {

	}
	
	public void Create(Transform snowheadGO, Transform snowheadGOSprite)
	{
		snowhead = transform.Find("snowheadSprite");
		snowheadSprite = snowhead.GetComponent<SpriteRenderer>();
		borderSprite = transform.Find("borderSprite").GetComponent<SpriteRenderer>();
		topBound = Camera.main.ScreenToWorldPoint(new Vector3(0.0f, Screen.height, 0)).y; ;
		startBound = EnemyManager.Instance.topBound + 2;

		this.snowheadGO = snowheadGO;
		this.snowheadGOSprite = snowheadGOSprite;
		Camera.main.GetComponent<AudioSource>().PlayOneShot(warningSoundClip);
		transform.position = new Vector3(snowheadGO.position.x, topBound - borderSprite.sprite.bounds.size.y, 0);
	}

	// Update is called once per frame
	void Update () {
		//Set position
		transform.position = new Vector3(snowheadGO.position.x, transform.position.y, 0);

		//Set rotation
		snowhead.rotation = snowheadGOSprite.rotation;

		//Get percent
		percent = (snowheadGO.position.y-topBound) / (startBound-topBound);

		//Set transparency
		transAmount = Mathf.Lerp(0, 1, percent);
		color = new Color(255, 255, 255, transAmount);
		borderSprite.color = color;
		snowheadSprite.color = color;

		//Delete if the transparency is 0
		if(transAmount == 0)
		{
			Destroy(gameObject);
		}
	}
}
