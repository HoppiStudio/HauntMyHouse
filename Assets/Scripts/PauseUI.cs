using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseUI : MonoBehaviour
{
    [SerializeField] private GameObject pauseUIContainer;

    private void Start()
    {
        PauseManager.Instance.OnPauseStateToggled += SetUIActive;

        if(pauseUIContainer.activeInHierarchy)
        {
            pauseUIContainer.SetActive(false);
        }
    }

    private void SetUIActive(bool active)
    {
        pauseUIContainer.SetActive(active);
    }

    private void OnDisable()
    {
        PauseManager.Instance.OnPauseStateToggled -= SetUIActive;
    }
}
