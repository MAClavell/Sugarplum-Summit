using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IFollowable : MonoBehaviour {

	//Fields
	public bool move;
	public IFollowable leader;
	bool startMove;
	public float delay;
	float delayTimer;

	// Use this for initialization
	void Start () {
		move = true;
	}
	
	// Update is called once per frame
	void Update ()
	{
		UpdateMove();
	}

	//Move the minion based on its leader
	void UpdateMove()
	{
		if (leader != null && leader.move && !startMove)
		{
			startMove = true;
			delayTimer = delay;
		}

		if (startMove)
		{
			delayTimer -= Time.deltaTime;
			if (delayTimer < 0)
			{
				startMove = false;
				move = true;
			}
		}

		if(move && leader != null)
		{
			if ((leader.transform.position - transform.position).sqrMagnitude < 0.001f && leader.move == false)
			{
				move = false;
			}
		}
	}
}
