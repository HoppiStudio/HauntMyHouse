using TMPro;
using UnityEngine;

public class GhostBanishedUi : MonoBehaviour
{
    private TMP_Text _ghostBanishedText;

    private void OnEnable() => BanishManager.Instance.OnGhostBanished += OnGhostBanished;
    private void OnDisable() => BanishManager.Instance.OnGhostBanished -= OnGhostBanished;
    private void Awake() => _ghostBanishedText = GetComponent<TMP_Text>();
    private void Start() => _ghostBanishedText.text = "";

    private void OnGhostBanished()
    {
        _ghostBanishedText.text = "Ghost BANISHED!";
    }
}
