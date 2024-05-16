using UnityEngine;

public class RespawnTrigger : MonoBehaviour
{
    [Header("Player Settings")]
    [SerializeField] private CharacterController _characterController;
    [SerializeField] private GameObject _player;

    [Header("Sound Effects")]
    
    [SerializeField] private AudioClip _playerDeathSound;
    private AudioSource _audioSource;

    [Header("Particle Effect")]
    [SerializeField] private ParticleSystem _playerDeathEffect;

    [Header("Falling Settings")]
    private float _reloadPositionY = -6f;
    private bool _falling = false;

    private GameManager _gameManager;
    private LivesManager _livesManager;

    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
        _gameManager = FindObjectOfType<GameManager>();
        _livesManager = FindObjectOfType<LivesManager>();
    }

    private void Update()
    {
        if (!_falling)
        {
            PlayerRespawn();
        }
    }

    private void PlayerRespawn()
    {
        if (_characterController != null && _characterController.transform.position.y <= _reloadPositionY)
        {
            _falling = true;
            _audioSource.PlayOneShot(_playerDeathSound);
            Instantiate(_playerDeathEffect, _player.transform.position, Quaternion.identity);
            _livesManager.UpdateLives(0);
            Destroy(_player);
            _gameManager.FallSequence();
        }
    }
}
