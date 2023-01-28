using TMPro;
using UnityEngine;

public class GhostBanishedUi : MonoBehaviour
{
    private TMP_Text _ghostBanishedText;
    [SerializeField] private BanishManager banishManager;

    private void OnEnable() => banishManager.OnGhostBanished += OnGhostBanished;
    private void OnDisable() => banishManager.OnGhostBanished -= OnGhostBanished;
    private void Awake()
    {
        _ghostBanishedText = GetComponent<TMP_Text>();
        if (banishManager == null)
        {
            Debug.LogError("GhostsBanishedUi inspector is missing references!", this);
        }
    }

    private void Start() => _ghostBanishedText.text = "";

    private void OnGhostBanished()
    {
        _ghostBanishedText.text = "Ghost BANISHED!";
    }
}
