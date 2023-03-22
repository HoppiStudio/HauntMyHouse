using System;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace Puzzles
{
    public abstract class Puzzle : MonoBehaviour
    {
        [SerializeField] private bool completed = false;

        public bool IsCompleted()
        {
            return completed;
        }

        public static event Action OnPuzzleComplete;

        protected void Complete()
        {
            completed = true;
            Debug.Log(this + " <color=green>completed!</color>");
            OnPuzzleComplete?.Invoke();
        }
    }
}
