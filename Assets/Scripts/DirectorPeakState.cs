using AiDirector.Scripts;

public class DirectorPeakState : IState
{
    private Director _director;
    
    public DirectorPeakState(Director director) => _director = director;
    
    public void OnStateEnter()
    {
        //_timeSpentInPeak = defaultPeakDuration;
    }

    public void OnStateUpdate()
    {
        //_timeSpentInPeak -= Time.deltaTime;
        
        // if PEAK tempo and X amount of time has passed, change state to PEAK-FADE
        /*if(_timeSpentInPeak <= 0 && _state.CurrentTempo == DirectorState.Tempo.Peak)
        {
            maxPopulationCount = 0;
            _timeSpentInPeak = defaultPeakDuration; 
            _state.CurrentTempo = DirectorState.Tempo.PeakFade;
        }*/
    }

    public void OnStateExit()
    {
        
    }
}