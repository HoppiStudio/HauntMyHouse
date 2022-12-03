using AiDirector.Scripts;
using UnityEngine;

public class DirectorEventTest : MonoBehaviour
{
    private void OnEnable() => DirectorEventBus.Subscribe(DirectorEvent.EnteredRespiteState, SomeMethod);

    private void OnDisable() => DirectorEventBus.UnSubscribe(DirectorEvent.EnteredRespiteState, SomeMethod);

    private void SomeMethod()
    {
        Debug.Log("Director has entered <color=magenta>RESPITE</color> state");
    }
}
