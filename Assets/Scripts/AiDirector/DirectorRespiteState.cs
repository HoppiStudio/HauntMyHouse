﻿using AiDirector;
using AiDirector.Scripts;
using UnityEngine;

public class DirectorRespiteState : IState
{
    private Director _director;
    private StateMachine _stateMachine;
    
    public DirectorRespiteState(Director director, StateMachine stateMachine)
    {
        _director = director;
        _stateMachine = stateMachine;
    }

    public void OnStateEnter() => DirectorEventBus.Publish(DirectorEvent.EnteredRespiteState);

    public void OnStateUpdate()
    {
        _director.RespiteDuration -= Time.deltaTime;
        
        if (_director.RespiteDuration <= 0)
        {
            _director.MaxPopulationCount = _director.GetMaxBuildUpPopulation();
            _director.RespiteDuration = _director.GetDefaultRespiteDuration(); 
            _stateMachine.ChangeState(typeof(DirectorBuildUpState));
        }
        //Debug.Log($"Intensity State: <color=orange>RESPITE</color>");
    }

    public void OnStateExit() {}
}