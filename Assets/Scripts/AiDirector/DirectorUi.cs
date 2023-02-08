using System;
using AiDirector;
using AiDirector.Scripts;
using TMPro;
using UnityEngine;

public class DirectorUi : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI directorIntensityText;
    [SerializeField] private TextMeshProUGUI directorStateText;
    [SerializeField] private TextMeshProUGUI deathText;

    private void OnEnable()
    {
        DirectorEventBus.Subscribe(DirectorEvent.EnteredNewState, UpdateDirectorStateTextOnEvent);
        DirectorEventBus.Subscribe(DirectorEvent.ReachedPeakIntensity, UpdateDeathTextOnPeakIntensityReachedEvent);
    }

    private void OnDisable()
    {
        DirectorEventBus.Unsubscribe(DirectorEvent.ReachedPeakIntensity, UpdateDeathTextOnPeakIntensityReachedEvent);
        DirectorEventBus.Unsubscribe(DirectorEvent.EnteredNewState, UpdateDirectorStateTextOnEvent);
    }

    private void Start() => deathText.text = "";

    private void Update()
    {
        directorIntensityText.text = $"Perceived Intensity: <color=red>{Director.Instance.GetPerceivedIntensity():#.00}</color>";
    }
    
    private void UpdateDirectorStateTextOnEvent()
    {
        directorStateText.text = $"Intensity State: <color=orange>{Director.Instance.GetDirectorState()}</color>";
    }
    
    private void UpdateDeathTextOnPeakIntensityReachedEvent()
    {
        deathText.text = "Haunt Threshold Reached.";
    }
}
