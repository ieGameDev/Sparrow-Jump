using System.Collections;
using UnityEngine;

public class FinishTrigger : MonoBehaviour
{
    [Header("Visual Effects")]
    [SerializeField] private ParticleSystem _successEffect;
    [SerializeField] private GameObject _fireworksPoint1;
    [SerializeField] private GameObject _fireworksPoint2;

    [Header("Sound Effects")]
    [SerializeField] private AudioClip _victorySound;
    [SerializeField] private AudioClip _fireworksSound;
    private AudioSource _audioSource;

    private GameManager _gameManager;

    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
        _gameManager = FindObjectOfType<GameManager>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (_gameManager != null)
            {
                _gameManager.VictorySequence();
                FinishVisualEffects(_fireworksPoint1);
                FinishVisualEffects(_fireworksPoint2);
                StartCoroutine(FinishSoundEffects());
            }
            else
            {
                Debug.LogError("GameManager не найден!");
            }
        }
    }

    private void FinishVisualEffects(GameObject fireworksPoint)
    {
        Instantiate(_successEffect, fireworksPoint.transform.position, Quaternion.identity);
    }

    private IEnumerator FinishSoundEffects()
    {
        _audioSource.PlayOneShot(_fireworksSound);
        yield return new WaitForSeconds(0.25f);
        _audioSource.PlayOneShot(_victorySound);
    }
}
