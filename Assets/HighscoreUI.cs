using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HighscoreUI : MonoBehaviour
{
    [SerializeField] private TMP_Text highscoreText;

    void Start()
    {
        if (PlayerPrefs.HasKey("highscore"))
        {
            Debug.Log("highscore key found");
        }
        else
        {
            Debug.Log("no highscore key found");
        }

        highscoreText.text = PlayerPrefs.GetInt("highscore", 0).ToString();
    }
}
