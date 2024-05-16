using UnityEngine;

public class AdsManager : MonoBehaviour
{
    public AdsInitializer AdsInitializer;
    public InterstitialAdExample InterstitialAd;

    public static AdsManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        InterstitialAd.LoadAd();
    }
}
