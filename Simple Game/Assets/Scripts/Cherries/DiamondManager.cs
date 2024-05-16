using TMPro;
using UnityEngine;

public class DiamondManager : MonoBehaviour
{
    [Header("Diamond Count Settings")]
    [SerializeField] private int _numberOfCollectedDiamonds;
    [SerializeField] private int _countOfDiamondsOnLevel;
    [SerializeField] private TextMeshProUGUI _text;

    public int NumberOfCollectedDiamonds => _numberOfCollectedDiamonds;
    public int CountOfDiamondsOnLevel => _countOfDiamondsOnLevel;

    [Header("Sound Settings")]
    [SerializeField] private AudioClip _diamondSoundLow;
    [SerializeField] private AudioClip _diamondSoundHigh;
    private AudioSource _audioSource;


    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
        Diamond[] diamonds = FindObjectsOfType<Diamond>();
        _countOfDiamondsOnLevel = diamonds.Length;
        UpdateText();
    }

    public void AddOne()
    {
        _numberOfCollectedDiamonds++;
        UpdateText();
        _audioSource.PlayOneShot(_diamondSoundLow);
        _audioSource.PlayOneShot(_diamondSoundHigh);
    }

    private void UpdateText()
    {
        _text.text = $"{_numberOfCollectedDiamonds}/{_countOfDiamondsOnLevel}";
    }
}
