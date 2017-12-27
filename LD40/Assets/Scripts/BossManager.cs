using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BossStates {Reveal, Formation, Turn, Fight, Death, Dead}

public class BossManager : MonoBehaviour {

	//Fields
	public BossStates state;
	public Transform[] formationPositions;
	public ParticleSystem[] eyeSparkles;
	public List<Transform> minions;
	public GameObject bossPrefab;
	Transform boss;
	Vector2 bossPosition;

	public AudioClip turnSound;

	//Boss setup vars
	public float speed;
	bool bossCreated;
	public bool wait;
	float waitTimer;
	public bool minionsTurned;
	public GameObject flashPrefab;

	public BackgroundMover bgMove;
	public AudioClip bossMusic;

	//Boss death vars
	float deathTimer;
	float deathInterval;
	public bool BossAtPosition
	{
		get
		{
			if (boss != null)
			{
				return boss.position.y == 3.8f;
			}
			else return false;
		}
	}
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
		deathTimer = 0;
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
					boss.position = new Vector2(0, 3.8f);
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
						StartCoroutine(FadeOutAudio());
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
					Instantiate(flashPrefab);
					boss.GetComponent<Boss>().turnParticles.Play();
					TurnMinions();
					wait = true;
					waitTimer = 3;
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
						Camera.main.GetComponent<AudioSource>().volume = 0.5f;
						Camera.main.GetComponent<AudioSource>().Play();
					}
				}
			}
			//Death animations
			else if(state == BossStates.Death && minions.Count > 0)
			{
				deathTimer += Time.deltaTime;
				if(deathTimer > deathInterval)
				{
					deathTimer = 0;
					Minion m = minions[minions.Count - 1].GetComponent<Minion>();
					minions.RemoveAt(minions.Count - 1);
					m.Destroy();
				}
			}
			//Boss is dead and animations are over
			else if (state == BossStates.Dead)
			{
				if(GameManager.Instance.gameOver != true)
				{
					GameManager.Instance.gameOver = true;
					GameManager.Instance.SetGameOver("The end.");
				}
			}
		}
	}

	IEnumerator FadeOutAudio()
	{
		while (Camera.main.GetComponent<AudioSource>().volume > 0)
		{
			Camera.main.GetComponent<AudioSource>().volume -= 0.05f;
			yield return new WaitForSeconds(0.1f);
		}
		Camera.main.GetComponent<AudioSource>().clip = null;
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
		Camera.main.GetComponent<AudioSource>().PlayOneShot(turnSound, 0.75f);
		Camera.main.GetComponent<AudioSource>().volume = 0.75f;
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
		boss.GetComponent<Boss>().SparkleEyes();
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
		bossPosition.y += 4.2f;
		boss = Instantiate(bossPrefab, bossPosition, Quaternion.identity).transform;
	}

	public void SetMinionExplodeInterval()
	{
		if (minions.Count > 0)
		{
			deathInterval = 3f / minions.Count;
		}
	}
}
