using System;
using System.Collections.Generic;
using UnityEngine;

public static class FlameColourMixingRules
{
    private static readonly Dictionary<Tuple<FlameColour, FlameColour>, FlameColour> RulesDictionary = new();
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

    public static FlameColour CombineColours(FlameColour colour1, FlameColour colour2)
    {
        // TODO: Optimise - Inefficient to create a new tuple each time this method is called
        var colourPair = Tuple.Create(colour1, colour2);
        return RulesDictionary[colourPair];
    }

    public static bool CheckRule(FlameColour colour1, FlameColour colour2)
    {
        // TODO: Optimise - Inefficient to create a new tuple each time this method is called
        var colourPair = Tuple.Create(colour1, colour2);
        if (RulesDictionary.ContainsKey(colourPair))
        {
            Debug.Log($"<color=lime>RULE FOUND!</color> ({colourPair.Item1} + {colourPair.Item2} = <color={ColourDictionary[RulesDictionary[colourPair]]}>{RulesDictionary[colourPair]}</color>)");
            return true;
        }
        Debug.Log($"<color=red>ERROR!</color> ({colourPair.Item1} + {colourPair.Item2} is not an existing rule!)");
        return false;
    }

    private static void CreateRule(FlameColour colour1, FlameColour colour2, FlameColour mixedColour)
    {
        var colourPairRule = Tuple.Create(colour1, colour2);
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
