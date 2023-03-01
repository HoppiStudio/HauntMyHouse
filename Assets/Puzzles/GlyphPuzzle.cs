using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class GlyphPuzzle : Puzzle
{
    [SerializeField] private List<GameObject> solution = new List<GameObject>();
    [SerializeField] private List<GameObject> blocksPlaced = new List<GameObject>();

    [SerializeField] private XRSocketInteractor socket;

    void Start()
    {

    }

    void Update()
    {

    }

    public void CheckPuzzleComplete()
    {
        int correctAnswers = 0;

        for (int i = 0; i < solution.Count; i++)
        {
            if (solution[i] == blocksPlaced[i])
            {
                correctAnswers++;
            }
        }

        if (correctAnswers == solution.Count)
        {
            Complete();
        }
    }

    public void Debugger()
    {
        Debug.Log("block placed");
    }
}
