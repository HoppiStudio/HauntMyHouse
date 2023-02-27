using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    // Start is called before the first frame update
    public void playBtn ()
    {
        SceneManager.LoadScene("GameScene");
    }

    // Update is called once per frame
    public void exitBtn()
    {
        Application.Quit();
    }
}
