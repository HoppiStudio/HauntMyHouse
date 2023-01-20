using AiDirector.Scripts;
using AiDirector.Scripts.RulesSystem.Interfaces;

namespace AiDirector.RulesSystem.Rules.IntensityRules
{
    /*
     * Define your Intensity Rules like this
     * Each Intensity rule returns an intensity value
     * Make sure to add your intensity rule to the DirectorIntensityCalculator script
     */
    public class ExampleIntensityRule : IDirectorIntensityRule
    {
        public float CalculatePerceivedIntensity(Director director)
        {
            return 0; // Should return a value greater than zero. 
        }
    }
}
