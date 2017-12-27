using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundMover : MonoBehaviour {

	//Vars
	public Transform[] bgs;
    public float moveRate;
	public Transform bossBG;
	bool bossPlaced;
	bool bossScrolled;

	// Use this for initialization
	void Start () {
		bossPlaced = false;
		bossScrolled = false;
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (GameManager.Instance.state == GameState.SHMUP)
		{
			foreach (Transform bg in bgs)
			{
				//tp the background to the top
				if (bg.position.y <= -13)
				{
					if (GameManager.Instance.state != GameState.BOSS)
					{
						bg.position = new Vector3(0, 20, 0);
					}
				}
				//scroll
				bg.position -= new Vector3(0, moveRate * Time.deltaTime, 0);
			}
		}
		else
		{
			if(!bossPlaced)
			{
				PlaceBossBackground();
			}
			if (!bossScrolled && !BossManager.Instance.BossAtPosition)
			{
				foreach (Transform bg in bgs)
				{
					//scroll
					bg.position -= new Vector3(0, moveRate * Time.deltaTime, 0);
				}
				bossBG.position -= new Vector3(0, moveRate * Time.deltaTime, 0);
			}
			else
			{
				bossScrolled = true;
			}
		}
    }

	Transform GetHighestBackground()
	{
		Transform highest = bgs[0];
		foreach(Transform bg in bgs)
		{
			if(bg.position.y > highest.position.y)
			{
				highest = bg;
			}
		}
		return highest;
	}

	void PlaceBossBackground()
	{
		Transform hbg = GetHighestBackground();
		float ypos = hbg.GetComponent<Collider>().bounds.max.y + bossBG.GetComponent<Collider>().bounds.extents.y;
		Vector2 position = new Vector2(0, ypos);
		bossBG.position = position;
		bossPlaced = true;
	}
}
