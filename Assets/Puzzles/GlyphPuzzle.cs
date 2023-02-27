using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlyphPuzzle : Puzzle
{
    [SerializeField] private List<GameObject> solution = new List<GameObject>();
    [SerializeField] private List<GameObject> blocksPlaced = new List<GameObject>();

    void Start()
    {
        
    }

    void Update()
    {
        int correctAnswers = 0;
        for (int i = 0; i < solution.Count; i++)
        {
            if(solution[i] == blocksPlaced[i])
            {
                correctAnswers++;
            }
        }
        if(correctAnswers == solution.Count)
        {
            Complete();
        }
    }
}
