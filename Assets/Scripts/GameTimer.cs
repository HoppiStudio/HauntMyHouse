using UnityEngine;

public class GameTimer : MonoBehaviour
{
    float timer = 0.0f;

    public static int timerInSeconds;

    void Update()
    {
        timer += Time.deltaTime;
        timerInSeconds = (int)(timer % 60);
    }
}
