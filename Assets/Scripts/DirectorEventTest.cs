using AiDirector.Scripts;
using UnityEngine;

public class DirectorEventTest : MonoBehaviour
{
    private void OnEnable() => DirectorEventBus.Subscribe(DirectorEvent.ReachedPeakIntensity, SomeMethod);
    private void OnDisable() => DirectorEventBus.UnSubscribe(DirectorEvent.ReachedPeakIntensity, SomeMethod);

    private void SomeMethod()
    {
        Debug.Log("Perceived intensity has reached the maximum threshold. <color=red>You Are Dead</color>.");
    }
}
