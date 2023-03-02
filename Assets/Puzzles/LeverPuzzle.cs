using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class LeverPuzzle : Puzzle
{
    [SerializeField, Header("Lever object references")]
    private List<Lever> levers = new List<Lever>();

    [SerializeField, Header("The correct solution for the levers")]
    private List<LeverState> solution = new List<LeverState>();

    void Start()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }

    public void CheckPuzzleComplete()
    {
        int correctAnswers = 0;

        for (int i = 0; i < solution.Count; i++)
        {
            if (solution[i] == levers[i].state)
            {
                correctAnswers++;
            }
        }

        if (correctAnswers == solution.Count)
        {
            Complete();
        }
    }

    private void OnDisable()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }
}
