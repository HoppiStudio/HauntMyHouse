using System.Collections;
using System.Collections.Generic;
using Puzzles;
using UnityEngine;

public class LeverPuzzle : Puzzle
{
    [SerializeField, Header("Lever object references")]
    private List<Lever> levers = new List<Lever>();

    [SerializeField, Header("The correct solution for the levers")]
    private List<LeverState> solution = new List<LeverState>() { LeverState.Up, LeverState.Down, LeverState.Middle, LeverState.Middle, LeverState.Down };

    void Start()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }

        // Set initial state of each lever to be in the middle
        foreach (var lever in levers)
        {
            lever.SetState(LeverState.Middle);
        }

        // Set the state of each lever to the desired solution state
        levers[0].SetState(LeverState.Up);
        levers[1].SetState(LeverState.Down);
        levers[2].SetState(LeverState.Middle);
        levers[3].SetState(LeverState.Middle);
        levers[4].SetState(LeverState.Down);
    }

    public void CheckPuzzleComplete()
    {
        bool correctOrder = true;
        bool correctState = true;

        // Check if levers are in correct order and state
        for (int i = 0; i < solution.Count; i++)
        {
            if (levers[i].state != solution[i])
            {
                correctState = false;
            }

            if (i > 0 && solution[i] < solution[i - 1])
            {
                correctOrder = false;
            }
        }

        if (correctOrder && correctState)
        {
            Complete();
        }
    }

    private void OnDisable()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged -= CheckPuzzleComplete;
        }
    }
}