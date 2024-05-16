using System.Collections;
using UnityEngine;

public class PlayerDamageSystem : MonoBehaviour
{
    [Header("Player Settings")]
    [SerializeField] private int _playerLives = 3;
    [SerializeField] private GameObject _player;
    [SerializeField] private Renderer _playerRenderer;
    [SerializeField] private CharacterController _characterController;
    [SerializeField] private float _bounceForce = 5f;

    [Header("Sound Effects")]
    [SerializeField] private AudioClip _playerDeathSound;
    [SerializeField] private AudioClip _damageSound;
    private AudioSource _audioSource;

    [Header("Particle Effect")]
    [SerializeField] private ParticleSystem _playerDeathEffect;

    [Header("Animations")]
    [SerializeField] private Animator _animator;

    private GameManager _gameManager;
    private LivesManager _livesManager;
    private bool _isInvincible = false;

    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
        _gameManager = FindObjectOfType<GameManager>();
        _livesManager = FindObjectOfType<LivesManager>();
    }

    public void Damage(Vector3 hitNormal)
    {
        if (!_isInvincible)
        {
            _playerLives--;
            _livesManager.UpdateLives(_playerLives);

            StartCoroutine(FlashPlayer());

            if (_playerLives < 1)
            {
                PlayerDeath();
            }
            else
            {
                _audioSource.PlayOneShot(_damageSound);

                Vector3 bounceDirection = hitNormal.normalized;
                _characterController.Move(bounceDirection * _bounceForce * Time.deltaTime);
            }
        }
    }

    private IEnumerator FlashPlayer()
    {
        _isInvincible = true;

        int flashes = 3;
        float flashDuration = 0.1f;

        for (int i = 0; i < flashes; i++)
        {
            if (_playerRenderer != null && _playerRenderer.material != null)
            {
                _playerRenderer.material.color = Color.red;
                yield return new WaitForSeconds(flashDuration);

                if (_playerRenderer != null && _playerRenderer.material != null)
                {
                    _playerRenderer.material.color = Color.white;
                }

                yield return new WaitForSeconds(flashDuration);
            }
            else
            {
                yield break;
            }
        }

        _isInvincible = false;
    }


    public void PlayerDeath()
    {
        _audioSource.PlayOneShot(_playerDeathSound);
        Instantiate(_playerDeathEffect, _player.transform.position, Quaternion.identity);
        Destroy(_player);
        _gameManager.PlayerDeathSequence();
    }
}