using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wave {

	public float[] times;
	public GameObject[] enemies;
	public bool[] generated;
	int totalEnemies;
	public float waveLength;

	public void GenerateEnemies(GameObject[] enemyPrefabs, int totalEnemies, float waveLength)
	{
		//Instantiate wave arrays
		times = new float[totalEnemies];
		enemies = new GameObject[totalEnemies];
		generated = new bool[totalEnemies];

		for (int i = 0; i < totalEnemies; i++)
		{
			enemies[i] = enemyPrefabs[Random.Range(0, enemyPrefabs.Length)];

			//Assign a time to the time array
			float time = Random.Range(0, waveLength);
			times[i] = time;
			generated[i] = false;
		}

		this.waveLength = waveLength;
	}

	public void GenerateEnemiesOld(GameObject[] enemyPrefabs, int intensity, float waveLength)
	{
		//Calculate amount of each enemy to put in wave
		int num_nuts = Random.Range(intensity, intensity * 2);
		int num_heads = Random.Range(intensity, intensity * 2);
		totalEnemies = num_nuts + num_heads;

		//Instantiate wave arrays
		times = new float[totalEnemies];
		enemies = new GameObject[totalEnemies];
		generated = new bool[totalEnemies];

		int index = 0;
		//Put enemies into enemy array
		for (int i = 0; i < num_nuts; i++)
		{
			enemies[index] = enemyPrefabs[0];
			index++;
		}
		for (int i = 0; i < num_heads; i++)
		{
			enemies[index] = enemyPrefabs[1];
			index++;
		}

		//Generate times and assign them to the times array
		for (int i = 0; i < totalEnemies; i++)
		{
			//Assign a time to the time array
			float time = Random.Range(0, waveLength);
			times[i] = time;
			generated[i] = false;
		}
		this.waveLength = waveLength;
	}
}
