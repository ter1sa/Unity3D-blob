using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Droplet : MonoBehaviour
{
    public GameObject droplet;

    private Vector2 _position;
    private bool _state;
    private bool _pressed;
 
    private void Update () {
        // _manager = GameObject.FindGameObjectWithTag ("Manager");
        // Droplet.transform.position = new Vector3(Random.Range(-8f, 8f), Random.Range(-4f, 3f), 0);
        // droplet.transform.position = new Vector3(Random.Range(10, 185) * 10, Random.Range(10, 80) * 10, 0);
        droplet.transform.position = _position;
    }

    public void OnClick(){
        _state = true;
    }

    public Vector2 position {
		get { return _position; }
		set { _position = value; }
	}

    public bool state {
		get { return _state; }
		set { _state = value; }
	}

    public bool pressed {
		get { return _pressed; }
		set { _pressed = value; }
	}
}
