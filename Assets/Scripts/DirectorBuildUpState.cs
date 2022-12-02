using AiDirector.Scripts;

public class DirectorBuildUpState : IState
{
    private Director _director;

    public DirectorBuildUpState(Director director) => _director = director;

    public void OnStateEnter()
    {
        
    }

    public void OnStateUpdate()
    {
        //_director.IncreasePerceivedIntensity();
        
        // if BUILD-UP tempo and perceived intensity has reached the peak threshold, change state to PEAK 
        /*if (_perceivedIntensity >= peakIntensityThreshold && _state.CurrentTempo == DirectorState.Tempo.BuildUp)
        {
            maxPopulationCount = maxPeakPopulation;
            _state.CurrentTempo = DirectorState.Tempo.Peak;
        }*/
    }

    public void OnStateExit()
    {
        
    }
}
