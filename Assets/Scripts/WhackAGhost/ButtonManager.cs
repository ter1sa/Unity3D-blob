using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ButtonManager : MonoBehaviour {

    public ScoreManager scoreManager;
    public TimeManager timeManager;

    public GameObject[] Ghosts;

    float showTime = 0.8f;
    float hideTime = 2f;

	void Start () {
        for (int i = 0; i < Ghosts.Length; i ++)
        {
            Ghosts[i].GetComponent<Button>().interactable = false;
            Ghosts[i].GetComponent<Animator>().Play("GhostDisappear");
        }
        StartCoroutine(ShowGhost());
	}
	
	public void PressedGhost(){
        if (timeManager.gameOver == false)
        {
            GameObject Ghosts = EventSystem.current.currentSelectedGameObject;
            Ghosts.GetComponent<Image>().color = Color.red;
            scoreManager.UpdateScore(10, true);
            StartCoroutine(HitGhost(Ghosts));
        }

	}

    IEnumerator ShowGhost(){
        yield return new WaitForSeconds(showTime);
        if (timeManager.gameOver == true){
            for (int i = 0; i < Ghosts.Length; i ++)
            {
                Ghosts[i].GetComponent<Button>().interactable = false;
                Ghosts[i].GetComponent<Animator>().Play("GhostDisappear");
            }
        }
        if (timeManager.gameOver == false)
        {
			int randBtn = Random.Range(0, Ghosts.Length);
			if (Ghosts[randBtn].GetComponent<Button>().interactable == false)
			{
				Ghosts[randBtn].GetComponent<Button>().interactable = true;
                Ghosts[randBtn].GetComponent<Animator>().Play("GhostAppear");
			}
			StartCoroutine(ShowGhost());
			StartCoroutine(HideGhost(Ghosts[randBtn]));
        }
		
	}

    IEnumerator HideGhost(GameObject Ghosts)
	{
        yield return new WaitForSeconds(hideTime);
        if (Ghosts.GetComponent<Button>().interactable == true)
        {
            scoreManager.UpdateScore(5, false);
            Ghosts.GetComponent<Button>().interactable = false;
            Ghosts.GetComponent<Animator>().Play("GhostDisappear");
		}
	}

	IEnumerator HitGhost(GameObject Ghosts)
	{
		yield return new WaitForSeconds(0.5f);
        Ghosts.GetComponent<Button>().interactable = false;
        Ghosts.GetComponent<Image>().color = Color.white;
		Ghosts.GetComponent<Animator>().Play("GhostDisappear");
	}
}
