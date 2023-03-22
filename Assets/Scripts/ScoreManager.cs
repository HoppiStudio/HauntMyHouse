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

    void Start()
    {
        Puzzle.OnPuzzleComplete += IncreaseScore;
        GameManager.Instance.OnGameOver += HighscoreOnGameOver;
    }

    private void IncreaseScore()
    {
        Score += scorePerPuzzleComplete;
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
        }
        else
        {
            Debug.Log("No new highscore");
        }

        PlayerPrefs.SetInt("highscore", Highscore);
        PlayerPrefs.Save();
    }

    private void OnDisable()
    {
        Puzzle.OnPuzzleComplete -= IncreaseScore;
        GameManager.Instance.OnGameOver -= HighscoreOnGameOver;
    }
}
