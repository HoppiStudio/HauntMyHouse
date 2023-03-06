using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Puzzle : MonoBehaviour
{
    [SerializeField] private bool completed = false;

    public bool IsCompleted()
    {
        return completed;
    }

    public event Action OnPuzzleComplete;
    public void Complete()
    {
        completed = true;
        Debug.Log(this + " completed");
        OnPuzzleComplete?.Invoke();
    }
}
