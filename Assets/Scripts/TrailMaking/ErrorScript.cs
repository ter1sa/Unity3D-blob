using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ErrorScript : MonoBehaviour
{
    public int errors = 0;

    void Update()
    {
        GetComponent<Text>().text = "Errors" + ": " + errors;
    }

    public void addError()
    {
        errors++;
    }
}
