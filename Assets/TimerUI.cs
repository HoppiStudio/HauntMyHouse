using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimerUI : MonoBehaviour
{
    [SerializeField] private GameTimer timer;
    [SerializeField] private TMP_Text  timerText;

    private void OnEnable()
    {
        timer.OnTimerValueChange += UpdateText;
    }

    private void UpdateText()
    {
        //Debug.Log($"{timer.timeInMinutes} : {timer.timeInSeconds}");

        if (timer.timeInMinutes < 10)
        {
            if (timer.timeInSeconds < 10)
            {
                timerText.text = $"{timer.timeInMinutes}:0{timer.timeInSeconds}";
            }
            else
            {
                timerText.text = $"{timer.timeInMinutes}:{timer.timeInSeconds}";
            }
        }
        else
        {
            if (timer.timeInSeconds < 10)
            {
                timerText.text = $"{timer.timeInMinutes}:0{timer.timeInSeconds}";
            }
            else
            {
                timerText.text = $"{timer.timeInMinutes}:{timer.timeInSeconds}";
            }
        }
    }

    private void OnDisable()
    {
        timer.OnTimerValueChange -= UpdateText;
    }
}
