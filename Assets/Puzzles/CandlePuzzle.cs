using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandlePuzzle : Puzzle
{
    [SerializeField] private List<GameObject> placedCandles = new List<GameObject>();

    void Start()
    {

    }

    void Update()
    {
        if(placedCandles.Count == 3)
        {
            Complete();
        }
    }

    public void CheckPuzzleComplete()
    {

    }
}
