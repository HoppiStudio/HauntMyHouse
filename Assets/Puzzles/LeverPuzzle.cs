using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Lever
{
    Up,
    Middle,
    Down
}

public class LeverPuzzle : Puzzle
{
    [SerializeField] private List<Lever> solution = new List<Lever>();
    [SerializeField] private List<Lever> levers = new List<Lever>();

    void Start()
    {

    }

    void Update()
    {
        int correctAnswers = 0;
        for (int i = 0; i < solution.Count; i++)
        {
            if (solution[i] == levers[i])
            {
                correctAnswers++;
            }
        }
        if (correctAnswers == solution.Count)
        {
            Complete();
        }
    }
}
