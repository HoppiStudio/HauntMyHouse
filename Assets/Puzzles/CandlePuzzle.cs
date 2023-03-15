using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Puzzles
{
    public class CandlePuzzle : Puzzle
    {
        [SerializeField] private List<Podium> podiums = new();
        private List<Tuple<PodiumColour, Podium>> _selectedSolution = new();
        private List<List<Tuple<PodiumColour, Podium>>> _preDeterminedSolutions;

        private void Start()
        {
            _preDeterminedSolutions = new List<List<Tuple<PodiumColour, Podium>>>
            {
                // Solution 1
                new List<Tuple<PodiumColour, Podium>>
                {
                    Tuple.Create(PodiumColour.Orange, podiums[0]),
                    Tuple.Create(PodiumColour.Orange, podiums[1]),
                    Tuple.Create(PodiumColour.Yellow, podiums[2]),
                    Tuple.Create(PodiumColour.Red, podiums[3]),
                    Tuple.Create(PodiumColour.Blue, podiums[4]),
                    Tuple.Create(PodiumColour.Yellow, podiums[5]),
                    Tuple.Create(PodiumColour.Red, podiums[6])
                },

                // Solution 2
                new List<Tuple<PodiumColour, Podium>>
                {
                    Tuple.Create(PodiumColour.Red, podiums[0]),
                    Tuple.Create(PodiumColour.Yellow, podiums[1]),
                    Tuple.Create(PodiumColour.Red, podiums[2]),
                    Tuple.Create(PodiumColour.Green, podiums[3]),
                    Tuple.Create(PodiumColour.Yellow, podiums[4]),
                    Tuple.Create(PodiumColour.Red, podiums[5]),
                    Tuple.Create(PodiumColour.Green, podiums[6])
                },

                // Solution 3
                new List<Tuple<PodiumColour, Podium>>
                {
                    Tuple.Create(PodiumColour.Yellow, podiums[0]),
                    Tuple.Create(PodiumColour.Purple, podiums[1]),
                    Tuple.Create(PodiumColour.Red, podiums[2]),
                    Tuple.Create(PodiumColour.Blue, podiums[3]),
                    Tuple.Create(PodiumColour.Purple, podiums[4]),
                    Tuple.Create(PodiumColour.Red, podiums[5]),
                    Tuple.Create(PodiumColour.Blue, podiums[6])
                }
            };

            // Randomly select one of the pre-determined solutions
            var selectedSolution = Random.Range(0, _preDeterminedSolutions.Count);
            _selectedSolution = _preDeterminedSolutions[selectedSolution];
            
            // Pick the ruleset for the flame colour mixing combinations
            FlameColourMixingRules.SetRuleset(selectedSolution);
            
            // Display podium shapes according to selected solutions - TODO: Refactor
            // Square(0), Triangle(1), Pentagon(2), Star(3), Circle(4)
            switch (selectedSolution)
            {
                case 0:
                    podiums.ForEach(podium => podium.SetPodiumShapeIcon(5));
                    podiums[0].SetPodiumShapeIcon(3);
                    podiums[3].SetPodiumShapeIcon(4);
                    podiums[5].SetPodiumShapeIcon(1);
                    break;
                case 1:
                    podiums.ForEach(podium => podium.SetPodiumShapeIcon(5));
                    podiums[1].SetPodiumShapeIcon(2);
                    podiums[4].SetPodiumShapeIcon(1);
                    podiums[6].SetPodiumShapeIcon(0);
                    break;
                case 2:
                    podiums.ForEach(podium => podium.SetPodiumShapeIcon(5));
                    podiums[2].SetPodiumShapeIcon(4);
                    podiums[4].SetPodiumShapeIcon(3);
                    podiums[6].SetPodiumShapeIcon(0);
                    break;
            }

            // Set the podium colours according to the selected solution
            foreach (var (newPodiumColour, podium) in _selectedSolution)
            {
                podium.SetPodiumColour(newPodiumColour);
            }
        }

        private void Update()
        {
            if (CheckPuzzleCompleted())
            {
                Debug.Log("<color=green>Puzzle completed!</color>");
                Complete();
            }
        }

        private bool CheckPuzzleCompleted()
        {
            return podiums.All(podium => podium.HasCandle);
        }
    }
}
