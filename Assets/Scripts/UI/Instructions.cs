using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instructions : MonoBehaviour
{
    GameObject instrut;
    public static bool GamePaused;

    void Start()
    {
        instrut = this.gameObject;
        TogglePause();
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