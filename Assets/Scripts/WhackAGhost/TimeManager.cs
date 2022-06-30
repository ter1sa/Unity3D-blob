using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class TimeManager : MonoBehaviour {

    public GameObject timeLabel;
	public GameObject statsPanel;

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
        GameObject.Find("EnergyBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
        GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
        GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Energy, 30);
        GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Health, 10);
        yield return new WaitForSeconds(2f);
        Time.timeScale = 0f;
        GameObject.Find("EnergyBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
        GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
        statsPanel.SetActive(true);
    }
}
