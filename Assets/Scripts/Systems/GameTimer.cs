using System;
using System.Collections;
using UnityEngine;

public class GameTimer : MonoBehaviour
{
    public static GameTimer Instance { get; private set; }
    
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
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Debug.LogError($"There should only be one instance of {this}");
            Destroy(this.gameObject);
        }
        
        timer = (startMinutes * 60) + startSeconds;
        TimerInMinsAndSecs();
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
            if (timer < 0)
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

    public void PauseUnpauseTimer(bool paused)
    {
        Paused = paused;
    }
}
