using System.Collections.Generic;

namespace CandlePuzzle
{
    public static class FlameColourMixingRules
    {
        private static readonly Dictionary<(FlameColour, FlameColour), FlameColour> RulesDictionary = new();

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
                return true;
            }
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
            var colourPairReversed = (colour2, colour1);
            if (!RulesDictionary.ContainsKey(colourPairRule))
            {
                RulesDictionary.Add(colourPairReversed, mixedColour);
                RulesDictionary.Add(colourPairRule, mixedColour);
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
                    // RULESET 1
                    
                    // Rule complexity level 1 (requiring only starting colours) 
                    CreateRule(FlameColour.Orange, FlameColour.Cyan, FlameColour.Red);
                    CreateRule(FlameColour.Orange, FlameColour.Green, FlameColour.DarkBlue);
                    
                    // Rule complexity level 2 (requiring one colour that needs to be created first)
                    CreateRule(FlameColour.DarkBlue, FlameColour.Cyan, FlameColour.Yellow);
                    
                    // Rule complexity level 3 (requiring two colours that need to be created first)
                    CreateRule(FlameColour.DarkBlue, FlameColour.Yellow, FlameColour.Purple);
                    CreateRule(FlameColour.Yellow, FlameColour.Purple, FlameColour.Pink);
                    break;
                case 1:
                    // RULESET 2
                    
                    // Rule complexity level 1 (requiring only starting colours) 
                    CreateRule(FlameColour.Orange, FlameColour.Green, FlameColour.Red);
                    CreateRule(FlameColour.Orange, FlameColour.Cyan, FlameColour.DarkBlue);
                    
                    // Rule complexity level 2 (requiring one colour that needs to be created first)
                    CreateRule(FlameColour.DarkBlue, FlameColour.Green, FlameColour.Yellow);
                    
                    // Rule complexity level 3 (requiring two colours that need to be created first)
                    CreateRule(FlameColour.Red, FlameColour.Yellow, FlameColour.Pink);
                    CreateRule(FlameColour.Red, FlameColour.Pink, FlameColour.Purple);
                    break;
                case 2:
                    // RULESET 3
                    
                    // Rule complexity level 1 (requiring only starting colours) 
                    CreateRule(FlameColour.Green, FlameColour.Cyan, FlameColour.Red);
                    
                    // Rule complexity level 2 (requiring one colour that needs to be created first)
                    CreateRule(FlameColour.Orange, FlameColour.Red, FlameColour.DarkBlue);
                    CreateRule(FlameColour.DarkBlue, FlameColour.Orange, FlameColour.Yellow);
                    
                    // Rule complexity level 3 (requiring two colours that need to be created first)
                    CreateRule(FlameColour.Red, FlameColour.DarkBlue, FlameColour.Purple);
                    CreateRule(FlameColour.DarkBlue, FlameColour.Purple, FlameColour.Pink);
                    break;
            }
        }
    }
}

