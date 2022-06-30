using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetAddScore : MonoBehaviour
{
    public GameObject _AddScore;

    public GameObject AddScore {
		get { return _AddScore; }
	}
}
