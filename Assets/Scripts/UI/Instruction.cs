using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instruction : MonoBehaviour
{
    GameObject instrut;
    public static bool GamePaused;

    void Start()
    {
        instrut = this.gameObject;
        bool mainMenu = GameObject.Find("SceneController").GetComponent<Controllers.SceneController>().mainMenu;
        if(mainMenu){
            TogglePause();
        }
        else{
            instrut.SetActive(false);
        }
    }

    public void TogglePause()
    {
        if (!GamePaused)
        {
            Pause();
        }
        else
        {
            UnPause();
        }

        GamePaused = !GamePaused;
    }

    private void Pause()
    {
        Time.timeScale = 0f;
        instrut.SetActive(true);
    }

    private void UnPause()
    {
        Time.timeScale = 1f;
        instrut.SetActive(false);
    }
}
