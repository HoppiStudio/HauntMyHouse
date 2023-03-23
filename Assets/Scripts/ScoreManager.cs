using System;
using System.Collections;
using System.Collections.Generic;
using Puzzles;
using UnityEngine;

public class ScoreManager : MonoBehaviour
{
    [SerializeField] private int scorePerPuzzleComplete = 10;
    public static int Score = 0;

    private static int previousHighscore;
    public static int Highscore = 0;

    private void Awake()
    {
        Score = 0;
    }

    void Start()
    {
        Puzzle.OnPuzzleComplete += IncreaseScore;
        GameManager.Instance.OnGameOver += HighscoreOnGameOver;
    }

    public static event Action OnScoreIncrease;
    private void IncreaseScore()
    {
        Score += scorePerPuzzleComplete;
        OnScoreIncrease?.Invoke();
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            IncreaseScore();
        }
    }

    private void HighscoreOnGameOver()
    {
        previousHighscore = PlayerPrefs.GetInt("highscore", 0);

        if (Score > previousHighscore)
        {
            Debug.Log($"New highscore: {Score}");
            Highscore = Score;

            PlayerPrefs.SetInt("highscore", Highscore);
            PlayerPrefs.Save();
        }
        else
        {
            Debug.Log("No new highscore");
        }
    }

    private void OnDisable()
    {
        Puzzle.OnPuzzleComplete -= IncreaseScore;
        GameManager.Instance.OnGameOver -= HighscoreOnGameOver;
    }
}
