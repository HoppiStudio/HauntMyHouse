using AiDirector.Scripts;
using UnityEngine;

public class DirectorPeakFadeState : IState
{
    private Director _director;
    private StateMachine _stateMachine;
    
    public DirectorPeakFadeState(Director director, StateMachine stateMachine)
    {
        _director = director;
        _stateMachine = stateMachine;
    }

    public void OnStateEnter() {}

    public void OnStateUpdate()
    {
        _director.DecreasePerceivedIntensity();
        
        if (_director.GetEnemyPopulationCount() == 0)
        {
            _director.MaxPopulationCount = _director.GetMaxRespitePopulation();
            _stateMachine.ChangeState(typeof(DirectorRespiteState));
        }
        Debug.Log($"Intensity State: <color=orange>PEAKFADE</color>");
        //Debug.Log($"Intensity: <color=orange>{_director.GetPerceivedIntensity()}</color>");
    }

    public void OnStateExit() {}
}