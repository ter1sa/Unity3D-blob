using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SummaryManager : MonoBehaviour {

    public Text hitTxt;
    public Text missTxt;
    public Text scoreTxt;

	void Start () {
        hitTxt.text = "Total Hits: " + PlayerPrefs.GetInt(ScoreTypes.PlayerHits.ToString());
        missTxt.text = "Total Misses: " + PlayerPrefs.GetInt(ScoreTypes.PlayerMisses.ToString());
        scoreTxt.text = "Total Score: " + PlayerPrefs.GetInt(ScoreTypes.PlayerScore.ToString());
	}

}
