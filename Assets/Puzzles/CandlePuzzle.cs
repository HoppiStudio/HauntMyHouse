using System.Collections.Generic;
using UnityEngine;

public class CandlePuzzle : Puzzle
{
    [SerializeField] private List<GameObject> placedCandles = new();

    private void Start()
    {

    }

    private void Update()
    {
        if(placedCandles.Count == 3)
        {
            Complete();
        }
    }

    /*public void CheckPuzzleComplete()
    {

    }*/
}
