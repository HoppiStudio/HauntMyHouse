using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager : MonoBehaviour
{
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
        Score += 10;
    }

    private void OnDisable()
    {
        Puzzle.OnPuzzleComplete -= IncreaseScore;
    }
}
