using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class StatsController : MonoBehaviour
{
    public enum Stats
    {
        Health,
        Energy,
        Hunger,
        Thirst,
        Amusement
    };

    //TODO: make it protected and add getters and setters
    static public Dictionary<Stats, int> stats = new Dictionary<Stats, int>
    {
        {Stats.Health, 100},
        {Stats.Energy, 100},
        {Stats.Hunger, 100},
        {Stats.Thirst, 100},
        {Stats.Amusement, 100}
    };

    private bool isAlive = true;
    private float multiplier = 1f;

    public GameObject gameOver;

    private void Start()
    {
        StartStatsDecrease();
    }

    private void Update()
    {
        SetMultiplier();
        if(stats[Stats.Health] == 0){
            Time.timeScale = 0f;
            isAlive = false;
        }
        if(!isAlive){
            gameOver.SetActive(true);
        }
    }

    public void ChangeStats(Stats stat, int value)
    {
        stats[stat] += value;
        stats[stat] = Mathf.Clamp(stats[stat], 0, 100);
        UpdateStatBar(stat);
    }

    private void UpdateStatBar(Stats stat)
    {
        GameObject.FindWithTag(stat + "Bar").GetComponent<Slider>().value = stats[stat];
    }

    private void SetMultiplier()
    {
        var average = (stats.Values.Sum() - stats[Stats.Health]) / (stats.Count - 1f);
        multiplier = Math.Max(0.1f, average / 100f);
    }

    private void StartStatsDecrease()
    {
        StartCoroutine(DecreaseStat(Stats.Health, 4f));
        StartCoroutine(DecreaseStat(Stats.Energy, 1f));
        StartCoroutine(DecreaseStat(Stats.Hunger, 0.66f));
        StartCoroutine(DecreaseStat(Stats.Thirst, 0.5f));
        StartCoroutine(DecreaseStat(Stats.Amusement, 0.4f));
    }

    private IEnumerator DecreaseStat(Stats stat, float repeatRate)
    {
        while (isAlive)
        {
            var secondsToWait = stat == Stats.Health ? repeatRate * multiplier : repeatRate;

            yield return new WaitForSeconds(secondsToWait);

            if (stats[stat] > 0)
            {
                stats[stat] -= 1;
            }

            UpdateStatBar(stat);
        }
    }

    public void restartGame(){
        stats[Stats.Health] = 100;
        stats[Stats.Energy] = 100;
        stats[Stats.Hunger] = 100;
        stats[Stats.Thirst] = 100;
        stats[Stats.Amusement] = 100;
    }
}