using UnityEngine;
using UnityEngine.UI;

public class SoundManager : MonoBehaviour
{
    private const string SoundPrefsKey = "SoundEnabled";
    private bool _isSoundOn = true;
    private AudioSource[] _audioSources;
    private bool _initialized = false;

    [SerializeField] private Sprite _soundOnSprite;
    [SerializeField] private Sprite _soundOffSprite;
    [SerializeField] private Button _soundButton;

    private void Awake()
    {
        if (_initialized)
            return;

        _isSoundOn = PlayerPrefs.GetInt(SoundPrefsKey, 1) == 1;
        _audioSources = FindObjectsOfType<AudioSource>();
        UpdateSound();
        UpdateSoundButtonImage(); 

        _initialized = true;
    }

    public void ToggleSound()
    {
        _isSoundOn = !_isSoundOn;
        PlayerPrefs.SetInt(SoundPrefsKey, _isSoundOn ? 1 : 0);
        UpdateSound();
        UpdateSoundButtonImage();
    }

    private void UpdateSound()
    {
        foreach (var audioSource in _audioSources)
        {
            audioSource.mute = !_isSoundOn;
        }
    }

    private void UpdateSoundButtonImage()
    {
        if (_soundButton != null && _soundButton.image != null)
        {
            if (_isSoundOn)
            {
                _soundButton.image.sprite = _soundOnSprite;
            }
            else
            {
                _soundButton.image.sprite = _soundOffSprite;
            }
        }
    }
}
