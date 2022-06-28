using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class getTime : MonoBehaviour
{
    public GameObject time;

    void Start () {
		GetComponent<Text>().text = time.GetComponent<Text>().text;
	}
}
