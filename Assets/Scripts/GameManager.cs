using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    /*[Header("Current Time")]
    [Tooltip("Time is in seconds. Max time display is 35999 (9:59:59)")]
    [SerializeField] public uint currentTimeValue;
    
    [Header("Longest Run")]
    [Tooltip("Time is in seconds. Max time display is 35999 (9:59:59)")]
    [SerializeField] public uint longestRunValue;

    [Header("Haunt Gauge")]
    [Tooltip("Parameter start from 0 to max value")]
    [SerializeField] public float hauntMeterCurrentValue;
    [SerializeField] public float hauntMeterMaxValue = 1f;

    [Header("Radar")]
    [Tooltip("Max Visible Distance in Radar")]
    [SerializeField] public Vector2 ghostMaxVisibleDistance;*/

    [SerializeField] private GameTimer timer;

    public static GameManager Instance { get; private set; }

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
    }

    private void Start()
    {
        timer.OnTimerComplete += GameOver;
    }

    private void OnDisable()
    {
        timer.OnTimerComplete -= GameOver;
    }

    public event Action OnGameStart;
    public void StartGame()
    {
        Debug.Log("GAME STARTED");
        OnGameStart?.Invoke();
    }

    public event Action OnGameOver;
    public void GameOver()
    {
        Debug.Log("GAME OVER");
        OnGameOver?.Invoke();
    }
}
