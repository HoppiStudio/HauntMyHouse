using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    public void OnContinuePressed()
    {
        PauseManager.Instance.ChangePauseState();
    }

    public void OnSettingsPressed()
    {
        Debug.Log("Settings Button Pressed");
    }

    public void OnRestartPressed()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void OnExitPressed()
    {
        SceneManager.LoadScene("MainMenu");
    }
}
