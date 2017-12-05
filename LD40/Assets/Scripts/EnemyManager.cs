using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour {

	//Field
	public GameObject[] enemyPrefabs;
	public Transform player;

	//Plane and bounds
	public Transform spawnPlane;
	public float leftBound;
	public float rightBound;
	public float topBound;
	public float bottomBound;
	public float midBound;

	//Current wave vars
	Wave currentWave;
	float currentWaveTime;
	public List<Transform> enemies;

	//Ornament vars
	public GameObject ornamentPrefab;
	public int amountOrnaments;
	public float[] ornamentTimes;
	public bool[] generatedOrnaments;

	//Singleton
	private static EnemyManager enemyManager;

	/// <summary>
	/// Singleton instance of EnemyManager
	/// </summary>
	public static EnemyManager Instance
	{
		get
		{
			if (!enemyManager)
			{
				//If no reference, find one
				enemyManager = FindObjectOfType(typeof(EnemyManager)) as EnemyManager;

				//If there is no gameobject then let the debugger know
				if (!enemyManager)
				{
					Debug.LogError("There needs to be one active EnemyManager script on a GameObject in your scene");
				}
				else
				{
					enemyManager.Init();
				}
			}

			return enemyManager;
		}
	}

	//Initialize variables after singleton is created
	void Init()
	{
		enemies = new List<Transform>();
		Instance.GenerateWave();

		//Get bounds
		leftBound = spawnPlane.GetComponent<Collider>().bounds.min.x;
		rightBound = spawnPlane.GetComponent<Collider>().bounds.max.x;
		topBound = spawnPlane.GetComponent<Collider>().bounds.max.y;
		bottomBound = spawnPlane.GetComponent<Collider>().bounds.min.y;
		midBound = spawnPlane.GetComponent<Collider>().bounds.center.x;

		//Generate times to spawn ornaments
		ornamentTimes = new float[amountOrnaments];
		generatedOrnaments = new bool[amountOrnaments];
		float totalLength = GameManager.Instance.gameLength;
		for(int i = 0; i < amountOrnaments; i++)
		{
			ornamentTimes[i] = (totalLength / amountOrnaments) * i;
			generatedOrnaments[i] = false;
		}
	}

	// Use this for initialization
	void Start () {
		if (Instance) { }
	}
	
	// Update is called once per frame
	void Update () {

		if (GameManager.Instance.state == GameState.SHMUP)
		{
			//Increment wave time
			currentWaveTime += Time.deltaTime;

			//If it is time to spawn an enemy, spawn it
			for (int i = 0; i < currentWave.enemies.Length; i++)
			{
				if (currentWave.times[i] < currentWaveTime)
				{
					if (currentWave.generated[i] != true)
					{
						currentWave.generated[i] = true;
						enemies.Add(Instantiate(currentWave.enemies[i]).transform);
					}
				}
			}

			//Check if wave is over and all enemies are dead
			if (currentWaveTime > currentWave.waveLength && AllEnemiesDefeated())
			{
				GenerateWave();
			}

			SpawnOrnaments();
		}
		else if(GameManager.Instance.state == GameState.BOSS)
		{

		}
	}

	//Generate a wave of enemies onto the screen
	void GenerateWave()
	{
		//Set time back to 0
		currentWaveTime = 0;

		//Generate number of enemies based on time
		int numEnemies;
		float length = GameManager.Instance.currentLength;
		if (length > 90)
		{
			numEnemies = 11;
		}
		else if (length > 60)
		{
			numEnemies = 9;
		}
		else if (length > 30)
		{
			numEnemies = 7;
		}
		else
		{
			numEnemies = 5;
		}

		//Generate wave
		Wave w = new Wave();
		w.GenerateEnemies(enemyPrefabs, numEnemies, 8);
		currentWave = w;
	}

	/// <summary>
	/// Return whether all enemies in the wave are defeated
	/// </summary>
	public bool AllEnemiesDefeated()
	{
		if (enemies.Count > 0)
		{
			foreach (Transform e in enemies)
			{
				if (!e.GetComponent<IEnemy>().Dead)
				{
					return false;
				}
			}
			return true;
		}
		return true;
	}

	/// <summary>
	/// Spawn the ornaments when it is time to spawn them
	/// </summary>
	void SpawnOrnaments()
	{
		for(int i = 0; i < ornamentTimes.Length; i++)
		{
			if (ornamentTimes[i] < GameManager.Instance.currentLength)
			{
				if (generatedOrnaments[i] != true)
				{
					generatedOrnaments[i] = true;
					Vector2 pos = new Vector2(Random.Range(leftBound, rightBound), topBound);
					Instantiate(ornamentPrefab, pos, Quaternion.identity);
				}
			}
		}
	}
}
