using AiDirector.Scripts;
using UnityEngine;

public class DirectorBuildUpState : IState
{
    private Director _director;
    private StateMachine _stateMachine;
    
    public DirectorBuildUpState(Director director, StateMachine stateMachine)
    {
        _director = director;
        _stateMachine = stateMachine;
    }

    public void OnStateEnter() => DirectorEventBus.Publish(DirectorEvent.EnteredBuildUpState);

    public void OnStateUpdate()
    {
        _director.IncreasePerceivedIntensity();
        
        if (_director.GetPerceivedIntensity() >= _director.GetPeakIntensityThreshold())
        {
            _director.MaxPopulationCount = _director.GetMaxPeakPopulation();
            _stateMachine.ChangeState(typeof(DirectorPeakState));
        }
        Debug.Log($"Intensity State: <color=orange>BUILDUP</color>");
    }

    public void OnStateExit() => DirectorEventBus.Publish(DirectorEvent.ReachedPeakIntensity);
}
