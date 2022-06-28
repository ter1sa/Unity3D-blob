using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficLight : MonoBehaviour
{
    
    public GameObject Green;
    public GameObject Red;

    private bool lightSwitch = false;
    
    private void Start ()
    {
        StartCoroutine(Cycle());
    }

    private void Update(){
        if (Input.GetKeyDown("space")){
            lightSwitch = !lightSwitch;
            greenOn();
        }
    }

    private IEnumerator Cycle(){
        while(true){
            lightSwitch = !lightSwitch;
            Green.SetActive(lightSwitch);
            Red.SetActive(!lightSwitch);
            yield return new WaitForSeconds(Random.Range(2f, 5f));
        }
    }

    public bool getLightSwitch(){
        return !lightSwitch;
    }

    // private void redOn()
    // {
    //     Green.SetActive(false);
    //     Red.SetActive(true);
    // }
    
    private void greenOn()
    {
        Green.SetActive(true);
        Red.SetActive(false);
    }
    
    // private void Update()
    // {
    //     green();
    //     red();
    // }
    
    // private void green()
    // {
    //     if (GreenTimer > 0){
    //         GreenTimer -= Time.deltaTime;
    //     }
        
    //     if (GreenTimer < 0){
    //         GreenTimer = 0;
    //     }
        
    //     if (GreenTimer == 0)
    //     {
    //         greenOn();
    //         GreenTimer = GreencoolDown;
    //     }
    // }
    
    // private void red()
    // {
    //     if (RedTimer > 0) {
    //         RedTimer -= Time.deltaTime;
    //     }
        
    //     if (RedTimer < 0) {
    //         RedTimer = 0;
    //     }
        
    //     if (RedTimer == 0)
    //     {
    //         redOn();
    //         RedTimer = RedcoolDown;
    //     }
    // }
}
