using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

namespace Puzzles
{
    public class LeverPuzzle : Puzzle
    {
        [SerializeField, Header("Lever object references")]
        private List<Lever> levers = new List<Lever>();

        [SerializeField, Header("Possible solutions for the levers")]
        private List<LeverSolution> possibleSolutions = new List<LeverSolution>();

        void Start()
        {
            foreach (var lever in levers)
            {
                lever.OnLeverStateChanged += CheckPuzzleComplete;
            }
        }

        public void CheckPuzzleComplete()
        {
            int correctAnswers = 0;

            for (int i = 0; i < possibleSolutions[0].leverStates.Count; i++)
            {
                if (possibleSolutions[0].leverStates[i] == levers[i].state)
                {
                    correctAnswers++;
                }
            }

            if (correctAnswers == possibleSolutions[0].leverStates.Count)
            {
                Complete();
            }
        }

        public bool CheckSolution(LeverSolution solution)
        {
            bool isCorrect = true;

            for (int i = 0; i < levers.Count; i++)
            {
                if (levers[i].state != solution.leverStates[i])
                {
                    isCorrect = false;
                    break;
                }
            }

            return isCorrect;
        }

        public void RandomizeSolution()
        {
            if (possibleSolutions.Count > 0)
            {
                int index = Random.Range(0, possibleSolutions.Count);
                possibleSolutions[0] = possibleSolutions[index];
            }
        }

        private void OnDisable()
        {
            foreach (var lever in levers)
            {
                lever.OnLeverStateChanged += CheckPuzzleComplete;
            }
        }
    }
}

[System.Serializable]
public class LeverSolution
{
    public List<LeverState> leverStates;
}

public class TestScript : MonoBehaviour
{
    public List<LeverSolution> possibleSolutions = new List<LeverSolution>();
}
