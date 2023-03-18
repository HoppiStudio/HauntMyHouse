using System.Collections.Generic;
using UnityEngine;

namespace CandlePuzzle
{
    public static class FlameColourMixingRules
    {
        private static readonly Dictionary<(FlameColour, FlameColour), FlameColour> RulesDictionary = new();
        private static readonly Dictionary<FlameColour, string> ColourDictionary = new()
        {
            {FlameColour.White, "white"},
            {FlameColour.Red, "red"},
            {FlameColour.Green, "green"},
            {FlameColour.Blue, "cyan"},
            {FlameColour.Orange, "orange"},
            {FlameColour.Purple, "purple"},
            {FlameColour.Yellow, "yellow"},
        };

        /// <summary>
        /// Returns the result of two mixed colours if a rule exists for it.
        /// </summary>
        /// <returns>The mixed colour.</returns>
        public static FlameColour CombineColours(FlameColour colour1, FlameColour colour2)
        {
            var colourPair = (colour1, colour2);
            return RulesDictionary[colourPair];
        }

        /// <summary>
        /// Checks to see if a queried rule exists in the rule dictionary.
        /// </summary>
        /// <returns>True if the rule exists, and false if it doesn't.</returns>
        public static bool CheckRule(FlameColour colour1, FlameColour colour2)
        {
            var colourPair = (colour1, colour2);
            if (RulesDictionary.ContainsKey(colourPair))
            {
                Debug.Log($"<color=lime>RULE FOUND!</color> ({colourPair.Item1} + {colourPair.Item2} = <color={ColourDictionary[RulesDictionary[colourPair]]}>{RulesDictionary[colourPair]}</color>)");
                return true;
            }
            Debug.Log($"<color=red>ERROR!</color> ({colourPair.Item1} + {colourPair.Item2} is not an existing rule!)");
            return false;
        }

        /// <summary>
        /// Creates a colour mixing rule that gets added to the rule dictionary. 
        /// </summary>
        /// <param name="colour1">The first colour to be combined.</param>
        /// <param name="colour2">The second colour to be combined.</param>
        /// <param name="mixedColour">The colour you want to produce from the two combined colours.</param>
        private static void CreateRule(FlameColour colour1, FlameColour colour2, FlameColour mixedColour)
        {
            var colourPairRule = (colour1, colour2);
            if (!RulesDictionary.ContainsKey(colourPairRule))
            {
                RulesDictionary.Add(colourPairRule, mixedColour);
                Debug.Log($"<color=cyan>RULE CREATED!</color> ({colourPairRule.Item1} + {colourPairRule.Item2} = <color={ColourDictionary[RulesDictionary[colourPairRule]]}>{RulesDictionary[colourPairRule]}</color>)");
            }
            else
            {
                Debug.Log($"<color=red>ERROR!</color> ({colourPairRule.Item1} + {colourPairRule.Item2} rule already exists!)");
            }
        }

        /// <summary>
        /// Defines the set of pre-determined rules to be added to the rule dictionary.
        /// NOTE: Calling this more than once will NOT remove previous ruleset rules. 
        /// </summary>
        /// <param name="rulesetID"></param>
        public static void SetRuleset(int rulesetID)
        {
            switch (rulesetID)
            {
                case 0:
                    // Ruleset 1
                    CreateRule(FlameColour.Orange, FlameColour.Blue, FlameColour.Red);
                    CreateRule(FlameColour.Blue, FlameColour.Orange, FlameColour.Red);
                
                    CreateRule(FlameColour.Green, FlameColour.Blue, FlameColour.Yellow);
                    CreateRule(FlameColour.Blue, FlameColour.Green, FlameColour.Yellow);
                    break;
                case 1:
                    // Ruleset 2
                    CreateRule(FlameColour.Orange, FlameColour.Green, FlameColour.Red);
                    CreateRule(FlameColour.Green, FlameColour.Orange, FlameColour.Red);
                
                    CreateRule(FlameColour.Green, FlameColour.Red, FlameColour.Yellow);
                    CreateRule(FlameColour.Red, FlameColour.Green, FlameColour.Yellow);
                    break;
                case 2:
                    // Ruleset 3
                    CreateRule(FlameColour.Blue, FlameColour.Green, FlameColour.Red);
                    CreateRule(FlameColour.Green, FlameColour.Blue, FlameColour.Red);
                
                    CreateRule(FlameColour.Orange, FlameColour.Blue, FlameColour.Yellow);
                    CreateRule(FlameColour.Blue, FlameColour.Orange, FlameColour.Yellow);
                
                    CreateRule(FlameColour.Red, FlameColour.Blue, FlameColour.Purple);
                    CreateRule(FlameColour.Blue, FlameColour.Red, FlameColour.Purple);
                    break;
            }
        }
    }
}
