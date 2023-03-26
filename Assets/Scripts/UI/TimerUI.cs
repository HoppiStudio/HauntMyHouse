using UnityEngine;
using TMPro;

public class TimerUI : MonoBehaviour
{
    [SerializeField] private TMP_Text  timerText;

    private void OnEnable()
    {
        GameTimer.Instance.OnTimerValueChange += UpdateText;
    }

    private void Start()
    {
        UpdateText();
    }

    private void UpdateText()
    {
        //Debug.Log($"{GameTimer.Instance.timeInMinutes} : {GameTimer.Instance.timeInSeconds}");

        if (GameTimer.Instance.timeInMinutes < 10)
        {
            if (GameTimer.Instance.timeInSeconds < 10)
            {
                timerText.text = $"{GameTimer.Instance.timeInMinutes}:0{GameTimer.Instance.timeInSeconds}";
            }
            else
            {
                timerText.text = $"{GameTimer.Instance.timeInMinutes}:{GameTimer.Instance.timeInSeconds}";
            }
        }
        else
        {
            if (GameTimer.Instance.timeInSeconds < 10)
            {
                timerText.text = $"{GameTimer.Instance.timeInMinutes}:0{GameTimer.Instance.timeInSeconds}";
            }
            else
            {
                timerText.text = $"{GameTimer.Instance.timeInMinutes}:{GameTimer.Instance.timeInSeconds}";
            }
        }
    }

    private void OnDisable()
    {
        GameTimer.Instance.OnTimerValueChange -= UpdateText;
    }
}
