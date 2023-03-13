using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[RequireComponent(typeof(TMP_Text))]
public class LeverText : MonoBehaviour
{
    [SerializeField] private Lever lever;
    private TMP_Text text;

    private void Awake()
    {
        text = this.GetComponent<TMP_Text>();
    }

    private void OnEnable()
    {
        lever.OnLeverStateChanged += ChangeText;
    }

    private void ChangeText()
    {
        text.text = lever.state.ToString();
    }

    private void OnDisable()
    {
        lever.OnLeverStateChanged -= ChangeText;
    }
}
