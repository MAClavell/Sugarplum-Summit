using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public enum GameState { SHMUP, BOSS}

public class GameManager : MonoBehaviour {

	//Game control vars
	public bool gameOver;
	public GameState state;

	public Player player;

	//Length vars
	public float gameLength;
	public float currentLength;
	public Vector2 progBarVals;
	public Transform progWings;
	Vector2 progWingsPosition;
    public GameObject[] lives;

	//Camera vars
	Camera cameraMain;

	//UI vars
	public Text uiText;
	public GameObject GOUI;

	//Singleton
	private static GameManager gameManager;

	/// <summary>
	/// Singleton instance of gameManager
	/// </summary>
	public static GameManager Instance
	{
		get
		{
			if (!gameManager)
			{
				//If no reference, find one
				gameManager = FindObjectOfType(typeof(GameManager)) as GameManager;

				//If there is no gameobject then let the debugger know
				if (!gameManager)
				{
					Debug.LogError("There needs to be one active gameManager script on a GameObject in your scene");
				}
				else
				{
					gameManager.Init();
				}
			}

			return gameManager;
		}
	}

	//Initialize variables after singleton is created
	void Init()
	{
		gameOver = false;
		state = GameState.SHMUP;
		currentLength = 0;
		progWingsPosition = new Vector2(-11.5f, progBarVals.y);
		progWings.localPosition = progWingsPosition;
		cameraMain = Camera.main;
	}

	// Use this for initialization
	void Start () {
		if (Instance) { }
	}
	
	// Update is called once per frame
	void Update () {
		if (!gameOver)
		{
			//SHMUP game state
			if (state == GameState.SHMUP)
			{
				currentLength += Time.deltaTime;
				SetProgressBar();
				if (currentLength >= gameLength && EnemyManager.Instance.AllEnemiesDefeated())
				{
					state = GameState.BOSS;
				}
			}
			//Space invaders game state
			else if (state == GameState.BOSS)
			{

			}

			if(player.Dead)
			{
				player.transform.Find("sprite").GetComponent<Animator>().Play("Player_Death");
			}
		}
	}

	void SetProgressBar()
	{
        float percent = currentLength / gameLength;
		progWingsPosition.y = Mathf.Lerp(progBarVals.x, progBarVals.y, percent);
		progWings.localPosition = progWingsPosition;
	}

    //Remove a life from the ui
    public void UIRemoveLife()
    {
        if(lives.Length > 0)
        {
			lives[lives.Length - 1].GetComponent<Animator>().Play("Life_Out");
            Destroy(lives[lives.Length - 1], 1);
            Array.Resize<GameObject>(ref lives, lives.Length - 1);
        }
    }

	public void CameraShake(float intensity, float length)
	{
		StartCoroutine(ShakeMainCamera(intensity, length));
	}

	IEnumerator ShakeMainCamera(float intensity, float length)
	{
		float cameraShakeTimer = length;
		while (cameraShakeTimer > 0)
		{
			cameraShakeTimer -= Time.deltaTime;
			Vector3 shake = UnityEngine.Random.insideUnitSphere;
			shake.z = -10;
			cameraMain.transform.localPosition = shake * intensity;
			yield return new WaitForSeconds(0);
		}

		cameraMain.transform.localPosition = new Vector3(0, 0, -10);
	}

	public void SetGameOver(string uiText)
	{
		gameOver = true;
		GOUI.SetActive(true);
		this.uiText.text = uiText;
	}
}
