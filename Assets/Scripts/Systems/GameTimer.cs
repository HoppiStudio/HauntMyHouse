using System;
using UnityEngine;

public class GameTimer : MonoBehaviour
{

    [SerializeField, Range(0, 59)] private int minutes;
    [SerializeField, Range(0, 59)] private int seconds;

    // Possible animationCurve
    [SerializeField] private float timeMultiplier = 1;

    private float timer = 0.0f;

    public int timeInMinutes;
    public int timeInSeconds;

    private bool complete = false;

    private void Start()
    {
        timer = (minutes * 60) + seconds;
    }

    public event Action OnTimerValueChange;
    public event Action OnTimerComplete;
    void Update()
    {
        if (complete)
            return;

        if (timeMultiplier < 0 && timer <= 0)
        {
            OnTimerComplete?.Invoke();
            complete = true;
        }

        int previousTime = timeInSeconds;

        timer += timeMultiplier * Time.deltaTime;

        timeInMinutes = (int)(timer / 60);
        timeInSeconds = (int)(timer % 60);

        if(timeInSeconds != previousTime)
        {
            OnTimerValueChange?.Invoke();
        }
    }
}