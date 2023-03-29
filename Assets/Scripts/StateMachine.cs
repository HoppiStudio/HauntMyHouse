using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class StateMachine
{
    public event Action OnStateChanged;
    public IState CurrentState { get; private set; }
    
    private Dictionary<Type, IState> _availableStatesDict;

    public void Update()
    {
        if (CurrentState == null)
        {
            CurrentState = _availableStatesDict.Values.First();
        }
        
        if (CurrentState != null) CurrentState.OnStateUpdate();
    }
    
    public void SetStates(Dictionary<Type, IState> statesDict) => _availableStatesDict = statesDict;

    public void ChangeState(Type newState)
    {
        if (CurrentState != null) CurrentState.OnStateExit();

        CurrentState = _availableStatesDict[newState];
        CurrentState.OnStateEnter();
        OnStateChanged?.Invoke();
    }

    public void NextState()
    {
        Type nextState;
    
        if (CurrentState == null)
        {
            nextState = _availableStatesDict.Values.First().GetType();
        }
        else
        {
            int currentIndex = Array.IndexOf(_availableStatesDict.Values.ToArray(), CurrentState);
            int nextIndex = currentIndex + 1;
            if (nextIndex >= _availableStatesDict.Count)
            {
                nextIndex = 0;
            }
            nextState = _availableStatesDict.Values.ElementAt(nextIndex).GetType();
        }
    
        ChangeState(nextState);
        Debug.Log($"Current state: {CurrentState}");

        // if the current state matches the next state in the queue, dequeue it 
        /*if (CurrentState.GetType() == _nextStateInQueue.Peek()) 
        {
            _nextStateInQueue.Enqueue(_nextStateInQueue.Dequeue());
        }

        Type nextState = _nextStateInQueue.Dequeue();
        _nextStateInQueue.Enqueue(nextState);
        ChangeState(nextState);*/
    }
}
