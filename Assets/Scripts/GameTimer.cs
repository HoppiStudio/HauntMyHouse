using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameTimer : MonoBehaviour
{

    [SerializeField, Range(0, 59)] private int startMinutes;
    [SerializeField, Range(0, 59)] private int startSeconds;

    // Possible animationCurve
    [SerializeField, Min(1)] private float timeMultiplier = 1;

    private bool complete = false;
    private int timer = 0;

    [HideInInspector] public int timeInMinutes;
    [HideInInspector] public int timeInSeconds;

    public bool Paused { get; private set; } = false;

    private void Awake()
    {
        timer = (startMinutes * 60) + startSeconds;
        TimerInMinsAndSecs();
    }

    private void Start()
    {
        GameManager.Instance.OnGameStart += StartTimer;
        PauseManager.Instance.OnPauseStateToggled += PauseUnpauseTimer;
    }

    void Update()
    {

    }

    public void StartTimer()
    {
        StartCoroutine(Timer());
    }

    /*private void Timer()
    {
        if (complete)
            return;

        if (timeMultiplier < 0 && timer <= 0)
        {
            OnTimerComplete?.Invoke();
            complete = true;
        }

        int previousTime = timeInSeconds;

        timer--;

        timeInMinutes = (timer / 60);
        timeInSeconds = timer % 60;

        OnTimerValueChange?.Invoke();
    }*/

    public event Action OnTimerValueChange;
    public event Action OnTimerComplete;
    private IEnumerator Timer()
    {
        while(!complete)
        {
            if (timer <= 0)
            {
                OnTimerComplete?.Invoke();
                complete = true;
                yield break;
            }

            yield return new WaitForSeconds(1.0f / timeMultiplier);
            timer--;
            OnTimerValueChange?.Invoke();

            TimerInMinsAndSecs();
        }
        yield break;
    }

    private void TimerInMinsAndSecs()
    {
        timeInMinutes = timer / 60;
        timeInSeconds = timer % 60;
    }

    private void OnDisable()
    {
        GameManager.Instance.OnGameStart -= StartTimer;
        PauseManager.Instance.OnPauseStateToggled -= PauseUnpauseTimer;
    }

    private void PauseUnpauseTimer(bool paused)
    {
        Paused = paused;
    }
}
