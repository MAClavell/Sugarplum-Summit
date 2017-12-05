using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BossStates {Reveal, Formation, Turn, Fight, Death}

public class BossManager : MonoBehaviour {

	//Fields
	public BossStates state;
	public Transform[] formationPositions;
	public List<Transform> minions;
	public GameObject bossPrefab;
	Transform boss;
	Vector2 bossPosition;

	//Boss setup vars
	public float speed;
	bool bossCreated;
	public bool wait;
	float waitTimer;
	public bool minionsTurned;

	public BackgroundMover bgMove;
	public AudioClip bossMusic;

	//Singleton
	private static BossManager bossManager;

	/// <summary>
	/// Singleton instance of bossManager
	/// </summary>
	public static BossManager Instance
	{
		get
		{
			if (!bossManager)
			{
				//If no reference, find one
				bossManager = FindObjectOfType(typeof(BossManager)) as BossManager;

				//If there is no gameobject then let the debugger know
				if (!bossManager)
				{
					Debug.LogError("There needs to be one active bossManager script on a GameObject in your scene");
				}
				else
				{
					bossManager.Init();
				}
			}

			return bossManager;
		}
	}

	//Initialize variables after singleton is created
	void Init()
	{
		minions = new List<Transform>();
		state = BossStates.Reveal;

		//Boss vars
		wait = false;
		waitTimer = 2;
		minionsTurned = false;
		bossCreated = false;
	}

	// Use this for initialization
	void Start()
	{
		if (Instance) { }
	}

	// Update is called once per frame
	void Update () {
		if (GameManager.Instance.state == GameState.BOSS)
		{
			//Reveal the boss
			if (state == BossStates.Reveal)
			{
				if(!bossCreated)
				{
					CreateBoss();
				}
				if(boss.position.y > 3.8f)
				{
					bossPosition = boss.position;
					bossPosition.y -= speed * Time.deltaTime;
					boss.position = bossPosition;
				}
				else if (!wait)
				{
					wait = true;
					waitTimer = 2;
				}

				//Wait between reveal and starting formation
				if (wait)
				{
					waitTimer -= Time.deltaTime;
					if (waitTimer < 0)
					{
						wait = false;
						state = BossStates.Formation;
						AssignFormationPos();
						Camera.main.GetComponent<AudioSource>().clip = null;
					}
				}
			}
			//Create the formation
			else if (state == BossStates.Formation)
			{
				if(AtFormation() && !wait)
				{
					wait = true;
					waitTimer = 2;
				}
				//Wait between finishing formation and turning the minions evil
				if (wait)
				{
					waitTimer -= Time.deltaTime;
					if (waitTimer < 0)
					{
						wait = false;
						state = BossStates.Turn;
					}
				}

			}
			//Turn the minions evil
			else if (state == BossStates.Turn)
			{
				if(!minionsTurned)
				{
					TurnMinions();
					wait = true;
					waitTimer = 2;
				}
				//Wait after turning the minions evil and the fight
				if (wait)
				{
					waitTimer -= Time.deltaTime;
					if (waitTimer < 0)
					{
						wait = false;
						state = BossStates.Fight;
						SetFightState();
						Camera.main.GetComponent<AudioSource>().clip = bossMusic;
						Camera.main.GetComponent<AudioSource>().Play();
					}
				}
			}
			//Fighting the player
			else if (state == BossStates.Fight)
			{
				if(boss.GetComponent<Boss>().Dead)
				{
					state = BossStates.Death;
				}
			}
			//Death
			else if (state == BossStates.Death)
			{
				if(GameManager.Instance.gameOver != true)
				{
					GameManager.Instance.gameOver = true;
					GameManager.Instance.SetGameOver("The end.");
					foreach (Transform m in minions)
					{
						Destroy(m.gameObject);
					}
				}
			}
		}
	}

	//Assign the minions their position in the formation
	public void AssignFormationPos()
	{
		for (int i = 0; i < minions.Count; i++)
		{
			//Assign the minion's position on the star
			minions[i].GetComponent<Minion>().formationPosition = formationPositions[i].position;
		}
	}

	//Turn the minions into baddies
	public void TurnMinions()
	{
		for (int i = 0; i < minions.Count; i++)
		{
			//Turn the minion evil
			minions[i].GetComponent<Minion>().goodBadState = MinionStates.Bad;
			minions[i].Find("sprite").GetComponent<Animator>().Play("Minion_Bad_Idle");
			minions[i].Find("sprite").localScale = new Vector3(0.35f, 0.35f, 0.35f);
		}
		minionsTurned = true;
	}

	//Set the boss and all the miinions to fight mode
	public void SetFightState()
	{
		boss.GetComponent<Boss>().state = EnemyStates.Fight;
		boss.GetComponent<Boss>().StartAttacks();
		foreach(Transform m in minions)
		{
			//Turn the minion evil
			m.GetComponent<Minion>().bossState = EnemyStates.Fight;
		}
	}

	//Check if all minions are at formation
	public bool AtFormation()
	{
		foreach(Transform m in minions)
		{
			if(!m.GetComponent<Minion>().AtFormationPosition)
			{
				return false;
			}
		}
		return true;
	}

	//Instantiate the boss
	public void CreateBoss()
	{
		bossCreated = true;
		bossPosition = bgMove.bossBG.position;
		bossPosition.y += 3.6f;
		boss = Instantiate(bossPrefab, bossPosition, Quaternion.identity).transform;
	}
}
