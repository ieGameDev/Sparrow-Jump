using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    //[DllImport("__Internal")]
    //private static extern void ShowAdv();


    private int _currentSceneNumber;
    private float _respawnDelay = 0.45f;
    private float _victoryDelay = 0.85f;

    private DiamondManager _diamondManager;

    [Header("Start Level Settings")]
    [SerializeField] private GameObject _player;
    [SerializeField] private GameObject _gameUI;
    [SerializeField] private GameObject _startLevelUI;
    [SerializeField] private GameObject _endLevelUI;
    [SerializeField] private GameObject _playerUI;
    [SerializeField] private GameObject _pauseButton;
    [SerializeField] private GameObject _respawnUI;
    [SerializeField] private TextMeshProUGUI[] _countOfCherries;
    [SerializeField] private TextMeshProUGUI[] _levelNumber;
    [SerializeField] private AudioClip _respawnSound;
    private AudioSource _audioSource;


    private void Start()
    {

        _diamondManager = FindObjectOfType<DiamondManager>();
        _currentSceneNumber = SceneManager.GetActiveScene().buildIndex;
        _audioSource = GetComponent<AudioSource>();
        LevelStartSequence();
    }

    public void LoadCurrentLocation()
    {
        //ShowAdv();
        SceneManager.LoadScene(_currentSceneNumber);
    }

    public void LoadNextLocation()
    {
        int nextSceneIndex = _currentSceneNumber + 1;
        if (nextSceneIndex == SceneManager.sceneCountInBuildSettings)
        {
            nextSceneIndex = 0;
        }

        PlayerPrefs.SetInt($"DiamondsCollected{_currentSceneNumber}", _diamondManager.NumberOfCollectedDiamonds == _diamondManager.CountOfDiamondsOnLevel ? 1 : 0);
        PlayerPrefs.Save();

        //ShowAdv();
        AdsManager.Instance.InterstitialAd.ShowAd();
        SceneManager.LoadScene(nextSceneIndex);
    }

    public void VictorySequence()
    {
        OnLevelComplete();
        Invoke("LevelFinishSequence", _victoryDelay);
    }

    public void FallSequence()
    {
        Invoke("PlayerRespawnSequence", _respawnDelay);
    }

    public void PlayerDeathSequence()
    {
        Invoke("PlayerRespawnSequence", _respawnDelay);
    }

    private void OnLevelComplete()
    {
        if (_currentSceneNumber == LevelSelectionMenuManager.UnlockedLevels)
        {
            LevelSelectionMenuManager.UnlockedLevels++;
            PlayerPrefs.SetInt("UnlockedLevels", LevelSelectionMenuManager.UnlockedLevels);
            PlayerPrefs.Save();
        }
    }

    private void PlayerRespawnSequence()
    {
        Time.timeScale = 0f;
        _gameUI.SetActive(false);
        _playerUI.SetActive(false);
        _respawnUI.SetActive(true);
    }

    private void LevelFinishSequence()
    {
        Time.timeScale = 0f;
        _player.SetActive(false);
        _gameUI.SetActive(false);
        _playerUI.SetActive(false);
        _endLevelUI.SetActive(true);
        foreach (var count in _countOfCherries)
        {
            count.text = $"{_diamondManager.NumberOfCollectedDiamonds}/{_diamondManager.CountOfDiamondsOnLevel}";
        }
    }

    private void LevelStartSequence()
    {
        _player.SetActive(false);
        _respawnUI.SetActive(false);
        _endLevelUI.SetActive(false);
        foreach (var level in _levelNumber)
        {
            level.text = _currentSceneNumber.ToString();
        }
        _gameUI.SetActive(false);
        _pauseButton.SetActive(false);
        _startLevelUI.SetActive(true);
        Time.timeScale = 0f;
    }

    public void ContinueButtonPressed()
    {
        _player.SetActive(true);
        _gameUI.SetActive(true);
        _pauseButton.SetActive(true);
        _startLevelUI.SetActive(false);
        Time.timeScale = 1f;
        PlayRespawnSound();
    }

    private void PlayRespawnSound()
    {
        _audioSource.PlayOneShot(_respawnSound);
    }
}
