using AiDirector.Scripts;

public class DirectorRespiteState : IState
{
    private Director _director;
    
    public DirectorRespiteState(Director director) => _director = director;
    
    public void OnStateEnter()
    {
        //_timeSpentInRespite = defaultRespiteDuration;
    }

    public void OnStateUpdate()
    {
        //_timeSpentInRespite -= Time.deltaTime;
        
        // if RESPITE tempo and X amount of time has passed, change state to BUILD-UP
        /*if (_timeSpentInRespite <= 0 && _state.CurrentTempo == DirectorState.Tempo.Respite)
        {
            maxPopulationCount = maxBuildUpPopulation;
            _timeSpentInRespite = defaultRespiteDuration;
            _state.CurrentTempo = DirectorState.Tempo.BuildUp;
        }*/
    }

    public void OnStateExit()
    {
        
    }
}