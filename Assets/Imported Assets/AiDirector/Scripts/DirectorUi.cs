using System;
using AiDirector.Scripts;
using TMPro;
using UnityEngine;

public class DirectorUi : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI directorIntensityText;
    [SerializeField] private TextMeshProUGUI directorStateText;

    private void OnEnable() => DirectorEventBus.Subscribe(DirectorEvent.EnteredNewState, UpdateDirectorStateTextOnEvent);
    private void OnDisable() => DirectorEventBus.UnSubscribe(DirectorEvent.EnteredNewState, UpdateDirectorStateTextOnEvent);

    private void Update()
    {
        directorIntensityText.text = $"Perceived Intensity: <color=red>{Director.Instance.GetPerceivedIntensity()}</color>";
    }
    
    private void UpdateDirectorStateTextOnEvent()
    {
        directorStateText.text = $"Intensity State: <color=orange>{Director.Instance.GetDirectorState()}</color>";
    }
}
