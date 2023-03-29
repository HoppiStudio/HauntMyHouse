using System.Collections.Generic;
using UnityEngine;

namespace CandlePuzzle
{
    public static class ColourMappingUtility
    {
        private static readonly Dictionary<PedestalColour, FlameColour> PedestalColourToFlameColourDict = new()
        {
            {PedestalColour.White, FlameColour.White},
            {PedestalColour.Red, FlameColour.Red},
            {PedestalColour.Green, FlameColour.Green},
            {PedestalColour.DarkBlue, FlameColour.DarkBlue},
            {PedestalColour.Cyan, FlameColour.Cyan},
            {PedestalColour.Yellow, FlameColour.Yellow},
            {PedestalColour.Orange, FlameColour.Orange},
            {PedestalColour.Purple, FlameColour.Purple},
            {PedestalColour.Pink, FlameColour.Pink}
        };

        private static readonly Dictionary<PedestalColour, Color> PedestalColourToColorDict = new()
        {
            {PedestalColour.White, Color.white},
            {PedestalColour.Red, Color.red},
            {PedestalColour.Green, Color.green},
            {PedestalColour.DarkBlue, Color.blue},
            {PedestalColour.Cyan, Color.cyan},
            {PedestalColour.Yellow, Color.yellow},
            {PedestalColour.Orange, new Color(1,0.5f,0)},
            {PedestalColour.Purple, new Color(0.5f, 0, 1)},
            {PedestalColour.Pink, Color.magenta}
        };

        private static readonly Dictionary<FlameColour, Color> FlameColourToColorDict = new()
        {
            {FlameColour.White, Color.white},
            {FlameColour.Red, Color.red},
            {FlameColour.Green, Color.green},
            {FlameColour.DarkBlue, Color.blue},
            {FlameColour.Cyan, Color.cyan},
            {FlameColour.Yellow, Color.yellow},
            {FlameColour.Orange, new Color(1,0.5f,0)},
            {FlameColour.Purple, new Color(0.5f, 0, 1)},
            {FlameColour.Pink, Color.magenta}
        };

        public static FlameColour GetFlameColourFromPedestalColour(PedestalColour pedestalColour)
        {
            return PedestalColourToFlameColourDict[pedestalColour];
        }
        
        public static Color GetColorFromPedestalColour(PedestalColour pedestalColour)
        {
            return PedestalColourToColorDict[pedestalColour];
        }
        
        public static Color GetColorFromFlameColour(FlameColour flameColour)
        {
            return FlameColourToColorDict[flameColour];
        }
    }
}