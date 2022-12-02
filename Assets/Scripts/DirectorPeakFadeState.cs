using AiDirector.Scripts;

public class DirectorPeakFadeState : IState
{
    private Director _director;
    
    public DirectorPeakFadeState(Director director) => _director = director;
    
    public void OnStateEnter()
    {
        
    }

    public void OnStateUpdate()
    {
        //_director.DecreasePerceivedIntensity();
        
        // If PEAK-FADE tempo and all enemies killed, change state to RESPITE 
        /*if (GetEnemyPopulationCount() == 0 && _state.CurrentTempo == DirectorState.Tempo.PeakFade)
        {
            maxPopulationCount = maxRespitePopulation;
            _state.CurrentTempo = DirectorState.Tempo.Respite;
        }*/
    }

    public void OnStateExit()
    {
        
    }
}