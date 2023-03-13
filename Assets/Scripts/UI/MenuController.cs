using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    public void playBtn ()
    {
        SceneManager.LoadScene("GameScene");
    }

    public void restartBtn()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void exitBtn()
    {
        Application.Quit();
    }
}
