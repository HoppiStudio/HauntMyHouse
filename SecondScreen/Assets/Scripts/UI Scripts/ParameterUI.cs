using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ParameterUI : MonoBehaviour
{
    [Header("Game Manager")]
    [SerializeField] private GameManager gameManager;
    
    [Header("Current Time")]
    [Tooltip("Time is in seconds. Max time display is 35999 (9:59:59)")]
    [SerializeField] private TMP_Text currentTimeText;
    
    [Header("Longest Run")]
    [Tooltip("Time is in seconds.")]
    [SerializeField] private TMP_Text longestRunText;

    [Header("Haunt Gauge")]
    [SerializeField] private Slider hauntMeterSlider;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        CurrentTimeUIUpdate();
        LongestRunUIUpdate();
        HauntedMeterUIUpdate();
    }

    // Current Time UI Update
    void CurrentTimeUIUpdate()
    {
        uint display;
        
        if(gameManager.currentTimeValue > 35999)
        {
            display = 35999;
        }
        else
        {
            display = gameManager.currentTimeValue;
        }

        uint hours = (display / 60) / 60;
        uint minutes = (display / 60) % 60;
        uint seconds = (display % 60) % 60;

        currentTimeText.text = hours.ToString("0") + ":" + minutes.ToString("00") + ":" + seconds.ToString("00");
    }

    // Longest Run UI Update
    void LongestRunUIUpdate()
    {
        uint display;
        
        if(gameManager.longestRunValue > 35999)
        {
            display = 35999;
        }
        else
        {
            display = gameManager.longestRunValue;
        }

        uint hours = (display / 60) / 60;
        uint minutes = (display / 60) % 60;
        uint seconds = (display % 60) % 60;

        longestRunText.text = hours.ToString("0") + ":" + minutes.ToString("00") + ":" + seconds.ToString("00");
    }

    // Haunted Meter UI Update
    void HauntedMeterUIUpdate()
    {
        hauntMeterSlider = hauntMeterSlider.GetComponent<Slider>();
        hauntMeterSlider.maxValue = gameManager.hauntMeterMaxValue;
        hauntMeterSlider.value = gameManager.hauntMeterCurrentValue;
    }    
}
