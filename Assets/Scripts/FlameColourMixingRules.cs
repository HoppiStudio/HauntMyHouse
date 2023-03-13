using System;
using System.Collections.Generic;
using UnityEngine;

public static class FlameColourMixingRules
{
    private static readonly Dictionary<Tuple<FlameColour, FlameColour>, FlameColour> RulesDictionary = new()
    {
        // Rule 1
        {Tuple.Create(FlameColour.Red, FlameColour.Yellow), FlameColour.Blue},
        {Tuple.Create(FlameColour.Yellow, FlameColour.Red), FlameColour.Blue},
        
        // Rule 2 etc...
        {Tuple.Create(FlameColour.Red, FlameColour.Orange), FlameColour.Purple},
        {Tuple.Create(FlameColour.Orange, FlameColour.Red), FlameColour.Purple},
        
        {Tuple.Create(FlameColour.Orange, FlameColour.Yellow), FlameColour.Green},
        {Tuple.Create(FlameColour.Yellow, FlameColour.Orange), FlameColour.Green}
    };
    
    private static readonly Dictionary<FlameColour, string> ColourDictionary = new()
    {
        {FlameColour.White, "white"},
        {FlameColour.Red, "red"},
        {FlameColour.Green, "green"},
        {FlameColour.Blue, "cyan"},
        {FlameColour.Orange, "orange"},
        {FlameColour.Purple, "purple"}
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
    
    public static void CreateRule(FlameColour colour1, FlameColour colour2, FlameColour mixedColour)
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
}
