using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuzzleTest : MonoBehaviour
{
    [SerializeField] private Puzzle puzzle;

    void Start()
    {
        puzzle.OnPuzzleComplete += BanishGhost;
    }

    void Update()
    {

    }

    private void BanishGhost()
    {
        Debug.Log(this + " check");
    }
}
