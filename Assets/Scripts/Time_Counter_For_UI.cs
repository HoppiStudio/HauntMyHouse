using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Time_Counter_For_UI : MonoBehaviour
{
    float timer = 0.0f;

    void Update()
    {
        timer += Time.deltaTime;
        int seconds = (int)(timer % 60);

        Current_Time.text = seconds.ToString();
        int BestTime = seconds - 1;
        Best_Time.text = BestTime.ToString();
    }

    [SerializeField] TMP_Text Current_Time;
    [SerializeField] TMP_Text Best_Time;
}
