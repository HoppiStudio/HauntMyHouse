using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [Header("Current Time")]
    [Tooltip("Time is in seconds. Max time display is 35999 (9:59:59)")]
    [SerializeField] public uint currentTimeValue;
    
    [Header("Longest Run")]
    [Tooltip("Time is in seconds. Max time display is 35999 (9:59:59)")]
    [SerializeField] public uint longestRunValue;

    [Header("Haunt Gauge")]
    [Tooltip("Parameter start from 0 to max value")]
    [SerializeField] public float hauntMeterCurrentValue;
    [SerializeField] public float hauntMeterMaxValue = 1f;

    [Header("Radar")]
    [Tooltip("Max Visible Distance in Radar")]
    [SerializeField] public Vector2 ghostMaxVisibleDistance;
}
