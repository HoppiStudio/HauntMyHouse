using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Puzzles
{
    public class CandlePuzzle : Puzzle
    {
        [SerializeField] private List<Pedestal> podiums = new();
        private List<Tuple<PedestalColour, Pedestal>> _selectedSolution = new();
        private List<List<Tuple<PedestalColour, Pedestal>>> _preDeterminedSolutions;

        private void Start()
        {
            _preDeterminedSolutions = new List<List<Tuple<PedestalColour, Pedestal>>>
            {
                // Solution 1
                new List<Tuple<PedestalColour, Pedestal>>
                {
                    Tuple.Create(PedestalColour.Orange, podiums[0]),
                    Tuple.Create(PedestalColour.Orange, podiums[1]),
                    Tuple.Create(PedestalColour.Yellow, podiums[2]),
                    Tuple.Create(PedestalColour.Red, podiums[3]),
                    Tuple.Create(PedestalColour.Blue, podiums[4]),
                    Tuple.Create(PedestalColour.Yellow, podiums[5]),
                    Tuple.Create(PedestalColour.Red, podiums[6])
                },

                // Solution 2
                new List<Tuple<PedestalColour, Pedestal>>
                {
                    Tuple.Create(PedestalColour.Red, podiums[0]),
                    Tuple.Create(PedestalColour.Yellow, podiums[1]),
                    Tuple.Create(PedestalColour.Red, podiums[2]),
                    Tuple.Create(PedestalColour.Green, podiums[3]),
                    Tuple.Create(PedestalColour.Yellow, podiums[4]),
                    Tuple.Create(PedestalColour.Red, podiums[5]),
                    Tuple.Create(PedestalColour.Green, podiums[6])
                },

                // Solution 3
                new List<Tuple<PedestalColour, Pedestal>>
                {
                    Tuple.Create(PedestalColour.Yellow, podiums[0]),
                    Tuple.Create(PedestalColour.Purple, podiums[1]),
                    Tuple.Create(PedestalColour.Red, podiums[2]),
                    Tuple.Create(PedestalColour.Blue, podiums[3]),
                    Tuple.Create(PedestalColour.Purple, podiums[4]),
                    Tuple.Create(PedestalColour.Red, podiums[5]),
                    Tuple.Create(PedestalColour.Blue, podiums[6])
                }
            };

            // Randomly select one of the pre-determined solutions
            var selectedSolution = Random.Range(0, _preDeterminedSolutions.Count);
            _selectedSolution = _preDeterminedSolutions[selectedSolution];
            
            // Pick the ruleset for the flame colour mixing combinations
            FlameColourMixingRules.SetRuleset(selectedSolution);
            
            // Display podium shapes according to selected solutions
            switch (selectedSolution)
            {
                case 0:
                    podiums.ForEach(podium => podium.SetPedestalShapeIcon(ShapeIcon.None));
                    podiums[0].SetPedestalShapeIcon(ShapeIcon.Star);
                    podiums[3].SetPedestalShapeIcon(ShapeIcon.Circle);
                    podiums[5].SetPedestalShapeIcon(ShapeIcon.Triangle);
                    break;
                case 1:
                    podiums.ForEach(podium => podium.SetPedestalShapeIcon(ShapeIcon.None));
                    podiums[1].SetPedestalShapeIcon(ShapeIcon.Pentagon);
                    podiums[4].SetPedestalShapeIcon(ShapeIcon.Triangle);
                    podiums[6].SetPedestalShapeIcon(ShapeIcon.Square);
                    break;
                case 2:
                    podiums.ForEach(podium => podium.SetPedestalShapeIcon(ShapeIcon.None));
                    podiums[2].SetPedestalShapeIcon(ShapeIcon.Circle);
                    podiums[4].SetPedestalShapeIcon(ShapeIcon.Star);
                    podiums[6].SetPedestalShapeIcon(ShapeIcon.Square);
                    break;
            }

            // Set the podium colours according to the selected solution
            foreach (var (newPodiumColour, podium) in _selectedSolution)
            {
                podium.SetPedestalColour(newPodiumColour);
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
