using AiDirector;
using AiDirector.Scripts;
using UnityEngine;

public class DirectorPeakState : IState
{
    private Director _director;
    private StateMachine _stateMachine;
    
    public DirectorPeakState(Director director, StateMachine stateMachine)
    {
        _director = director;
        _stateMachine = stateMachine;
    }

    public void OnStateEnter() => DirectorEventBus.Publish(DirectorEvent.EnteredPeakState);

    public void OnStateUpdate()
    {
        _director.PeakDuration -= Time.deltaTime;
        
        if(_director.PeakDuration <= 0)
        {
            _director.MaxPopulationCount = 0;
            _director.PeakDuration = _director.GetDefaultPeakDuration(); 
            _stateMachine.ChangeState(typeof(DirectorPeakFadeState));
        }
        //Debug.Log($"Intensity State: <color=orange>PEAK</color>");
    }

    public void OnStateExit() {}
}