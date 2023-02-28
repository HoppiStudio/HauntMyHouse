using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class LeverPuzzle : Puzzle
{
    [SerializeField] private List<LeverState> solution = new List<LeverState>();
    [SerializeField] private List<Lever> levers = new List<Lever>();

    void Start()
    {
        Lever[] leverArray = levers.ToArray();

        foreach (var lever in leverArray)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }

    void Update()
    {

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
        else 
        {
            Debug.Log("incorrect solution");
        }
    }
}
