using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;

public class GameManager : MonoBehaviour {

	public GameObject[] Droplets;
	public GameObject gameTime;
    public GameObject gameErrors;
    public GameObject addScore;
	public GameObject statsPanel;
    public GameObject stats;

	private bool _init  = false;
    private int droplets = 9;

    private int minXPos = 100, maxXPos = 1850, minYPos = 100, maxYPos = 800;
    private int sideLength = 320;

	void Update () {
		if (!_init)
			initializeDroplets ();

        if (Input.GetMouseButtonUp (0))
			checkDroplet ();
	}

	void initializeDroplets() {
        bool overlap = false;
        float xPos = Random.Range(minXPos, maxXPos);
        float yPos = Random.Range(minYPos, maxYPos);
        Droplets[0].GetComponent<Droplet>().position = new Vector2(xPos, yPos);
        Droplets [0].GetComponent<Droplet> ().pressed = false;
        Droplets [0].GetComponent<Droplet> ().state = false;
        int n = 1;
        
        while(n<Droplets.Length){
            overlap = false;
            xPos = Random.Range(minXPos, maxXPos);
            yPos = Random.Range(minYPos, maxYPos);
            
            for (int i = 1; i <= n; i++ ){
                float previousX = Droplets[n-i].GetComponent<Droplet>().position.x;
                float previousY = Droplets[n-i].GetComponent<Droplet>().position.y;

                if (previousX < xPos + sideLength && previousX + sideLength > xPos && previousY < yPos + sideLength && previousY + sideLength > yPos)
                {
                    overlap = true;
                }
            }
            if (overlap){
                continue;
            }

            Droplets[n].GetComponent<Droplet>().position = new Vector2(xPos, yPos);
            Droplets [n].GetComponent<Droplet> ().pressed = false;
            Droplets [n].GetComponent<Droplet> ().state = false;
            n++;
        }

		if (!_init)
			_init = true;
	}

    public void checkDroplet(){
        bool right = true;
        for (int i = 0; i < Droplets.Length; i++) {
			if (Droplets [i].GetComponent<Droplet> ().state){
				for (int j = 1; j<=i; j++){
                    if(!Droplets [i-j].GetComponent<Droplet> ().pressed){
                        right = false;
                        break;
                    }
                }
                if(right){
                    Droplets [i].GetComponent<Droplet> ().pressed = true;
                    Droplets [i].GetComponent<Image>().color = Color.green;
                    Droplets [i].GetComponent<Animator>().enabled = false;
                    Droplets [i].GetComponent<Button>().interactable = false;
                    droplets--;
                    if(droplets == 0){
                        StartCoroutine(endGame());
                    }
                }
                else{
                    gameErrors.GetComponent<ErrorScript> ().addError ();
                    StartCoroutine(incorrect(i));
                }
                Droplets [i].GetComponent<Droplet> ().state = false;
                break;
            }
        }
    }

    IEnumerator incorrect(int i) {
        Droplets [i].GetComponent<Image>().color = Color.red;
        yield return new WaitForSeconds(0.5f);
        Droplets [i].GetComponent<Image>().color = new Color32(60, 159, 219, 255);
    }

    IEnumerator endGame(){
        gameTime.GetComponent<timeScript> ().endGame ();
        addScore.SetActive(true);
        stats.GetComponent<StatsController>().ChangeStats(StatsController.Stats.Thirst, 30);
        yield return new WaitForSeconds(2f);
        Time.timeScale = 0f;
        addScore.SetActive(false);
        statsPanel.SetActive(true);
    }
}
