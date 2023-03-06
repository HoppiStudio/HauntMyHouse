using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimerUI : MonoBehaviour
{
    [SerializeField] private TMP_Text timerText;

    void Start()
    {
        
    }

    void Update()
    {
        timerText.text = GameTimer.timerInSeconds.ToString();
    }
}
