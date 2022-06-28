using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class TimeManager : MonoBehaviour {

    public GameObject timeLabel;
    public GameObject addScore;
	public GameObject statsPanel;
    public GameObject stats;

    float maxTime = 20;
    public bool gameOver = false;

	void Start () {

	}
	
	void Update () {
        maxTime -= Time.deltaTime;
        int seconds = Mathf.RoundToInt(maxTime % 60f);
        if (seconds >= 0)
        {
            timeLabel.GetComponent<Text>().text = "Time: " + seconds.ToString("00");
        }
        else
        {
            if (gameOver == false)
            {
                gameOver = true;
                StartCoroutine(endGame());
            }
        }
    }

    IEnumerator endGame(){
		timeLabel.GetComponent<Text>().color = Color.yellow;
        addScore.SetActive(true);
        stats.GetComponent<StatsController>().ChangeStats(StatsController.Stats.Energy, 30);
        yield return new WaitForSeconds(2f);
        Time.timeScale = 0f;
        addScore.SetActive(false);
        statsPanel.SetActive(true);
    }
}
