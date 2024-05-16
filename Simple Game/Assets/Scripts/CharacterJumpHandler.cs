using UnityEngine;

[RequireComponent(typeof(CharacterController))]
[RequireComponent(typeof(CharacterMovement))]

public class CharacterJumpHandler : MonoBehaviour
{
    [Header("Jump stats")]
    [SerializeField] private float _maxJumpTime;
    [SerializeField] private float _maxJumpHeight;
    private float _startJumpVelocity;

    [Header("CharacterController components")]
    private CharacterMovement _characterMovement;
    private CharacterController _characterController;

    [Header("Jump sound")]
    [SerializeField] private AudioClip _lowJumpSound;
    [SerializeField] private AudioClip _highJumpSound;
    [SerializeField] private AudioSource _wings;
    [SerializeField] private AudioSource _jump;

    [Header("Jump Animation")]
    [SerializeField] private Animator _animator;

    private void Start()
    {
        _characterMovement = GetComponent<CharacterMovement>();
        _characterController = GetComponent<CharacterController>();

        float maxHeightTime = _maxJumpTime / 2;
        _characterMovement.GravityForce = (2 * _maxJumpHeight) / Mathf.Pow(maxHeightTime, 2);
        _startJumpVelocity = (2 * _maxJumpHeight) / maxHeightTime;
    }

    public void Update()
    {
        _animator.SetBool("Jump", !_characterController.isGrounded);
        if (!_characterController.isGrounded)
        {
            if (!_wings.isPlaying)
                _wings.Play();
        }
        else
        {
            _wings.Stop();
        }
    }

    public void HandleJump()
    {
        if (_characterController != null)
        {
            if (_characterController.isGrounded)
            {
                _characterMovement.VelocityDirection.y = _startJumpVelocity;
                _jump.PlayOneShot(_lowJumpSound);
                _jump.PlayOneShot(_highJumpSound);
            }
        }
    }
}
