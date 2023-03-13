using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager : MonoBehaviour
{
    [SerializeField] private int scorePerPuzzleComplete = 10;
    public static int Score = 0;

    void Start()
    {
        Puzzle.OnPuzzleComplete += IncreaseScore;
    }

    void Update()
    {
        
    }

    private void IncreaseScore()
    {
        Score += scorePerPuzzleComplete;
    }

    private void OnDisable()
    {
        Puzzle.OnPuzzleComplete -= IncreaseScore;
    }
}
