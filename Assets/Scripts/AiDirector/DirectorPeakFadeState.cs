using AiDirector;
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

    public void OnStateEnter() => DirectorEventBus.Publish(DirectorEvent.EnteredPeakFadeState);

    public void OnStateUpdate()
    {
        _director.DecreasePerceivedIntensity();
        
        if (_director.GetEnemyPopulationCount() == 0 && _director.GetPerceivedIntensity() == 0)
        {
            _director.MaxPopulationCount = _director.GetMaxRespitePopulation();
            _stateMachine.ChangeState(typeof(DirectorRespiteState));
        }
        Debug.Log($"Intensity State: <color=orange>PEAKFADE</color>");
    }

    public void OnStateExit() {}
}