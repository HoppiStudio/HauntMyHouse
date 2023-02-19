using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Flashlight : MonoBehaviour
{
    public bool isOn = false;

    // Update is called once per frame
    void Update()
    {
        GetComponent<Light>().enabled = isOn;
    }

    public void toggleLight()
    {
        isOn = !isOn;
    }
}
