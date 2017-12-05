using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserScript : MonoBehaviour {

	public float stretchSpeed;
	public float maxStrech;
	Vector2 position;
	Vector2 scale;
	Transform spriteTransform;

	// Use this for initialization
	void Start () {
		spriteTransform = transform.Find("sprite");
		position = transform.position;
		scale = transform.localScale;
	}
	
	// Update is called once per frame
	void Update () {
		if (scale.y < maxStrech)
		{
			position.y -= (stretchSpeed / 4) * Time.deltaTime;
			scale.y += stretchSpeed * Time.deltaTime;

			transform.position = position;
			transform.localScale = scale;
		}
	}
}
