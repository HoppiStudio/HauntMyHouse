using System;
using System.Collections.Generic;
using System.Linq;

public class StateMachine
{
    private IState _currentState;
    private Dictionary<Type, IState> _availableStatesDict;

    public void Update()
    {
        if (_currentState == null)
        {
            _currentState = _availableStatesDict.Values.First();
        }
        
        if (_currentState != null) _currentState.OnStateUpdate();
    }
    
    public void SetStates(Dictionary<Type, IState> statesDict)
    {
        _availableStatesDict = statesDict;
    }

    public void ChangeState(Type newState)
    {
        if (_currentState != null) _currentState.OnStateExit();

        _currentState = _availableStatesDict[newState];
        _currentState.OnStateEnter();
    }
}
