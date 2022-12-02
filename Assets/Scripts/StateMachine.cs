public class StateMachine
{
    private IState _currentState;

    public void ChangeState(IState newState)
    {
        if (_currentState != null) _currentState.OnStateExit();

        _currentState = newState;
        _currentState.OnStateEnter();
    }

    public void Update()
    {
        if (_currentState != null) _currentState.OnStateUpdate();
    }
}
