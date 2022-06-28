using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Driver : MonoBehaviour
{
    [SerializeField] private float steerSpeed = 130f;
    [SerializeField] private float normalSpeed = 7f;
    [SerializeField] private float slowSpeed = 5f;
    // [SerializeField] private float fastSpeed = 15f;
    private float moveSpeed;
    public bool end;
    private int bumps;

    public GameObject gameTime;
    public GameObject trafficLight;
    public GameObject addScore;
    public GameObject statsPanel;
    public GameObject Bumps;
    public GameObject stats;
    
    private void Start()
    {
        moveSpeed = normalSpeed;
        end = false;
        bumps = 0;
    }
    private void Update()
    {
        float steerAmount = Input.GetAxis("Horizontal") * steerSpeed * Time.deltaTime;
        float moveAmount = Input.GetAxis("Vertical") * moveSpeed * Time.deltaTime;
        if (trafficLight.GetComponent<TrafficLight>().getLightSwitch()){
            steerAmount = 0;
            moveAmount = 0;
        }
        if (end){
            steerAmount = 0;
            moveAmount = 0;
        }
        transform.Rotate(0, 0, -steerAmount);
        transform.Translate(0, moveAmount, 0);
        Bumps.GetComponent<Text>().text = "No. of Bumps" + ": " + bumps;
    }

   private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "FinishLine")
        {
           StartCoroutine(endGame());
        }
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        bumps++;
        StartCoroutine(speed());
    }

    private IEnumerator speed() {
        moveSpeed = slowSpeed;
        yield return new WaitForSeconds(2f);
        moveSpeed = normalSpeed;
    }

    IEnumerator endGame(){
        end = true;
        gameTime.GetComponent<timeScript> ().endGame ();
        addScore.SetActive(true);
        stats.GetComponent<StatsController>().ChangeStats(StatsController.Stats.Hunger, 30);
        yield return new WaitForSeconds(2f);
        Time.timeScale = 0f;
        addScore.SetActive(false);
        statsPanel.SetActive(true);
    }
}
