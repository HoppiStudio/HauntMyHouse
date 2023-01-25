using AiDirector.Scripts;
using AiDirector.Scripts.RulesSystem.Interfaces;

namespace AiDirector.RulesSystem.Rules.IntensityRules
{
    public class PassiveHauntIncreaseRule : IDirectorIntensityRule
    {
        public float CalculatePerceivedIntensity(Director director)
        {
            return 0.01f; 
        }
    }
}