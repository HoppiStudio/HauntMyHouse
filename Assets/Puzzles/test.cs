using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour
{
    [SerializeField] private Puzzle puzzle;

    void Start()
    {

    }

    void Update()
    {
        if (puzzle.IsCompleted())
        {
            BanishGhost();
        }
    }

    private void BanishGhost()
    {
        Debug.Log("Banish ghost");
    }
}
