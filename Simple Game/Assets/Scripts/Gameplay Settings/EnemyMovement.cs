using System.Collections;
using UnityEngine;

public class EnemyMovement : MonoBehaviour
{
    [Header("Enemy Moving Settings")]
    [SerializeField] private float _moveSpeed = 1.0f;
    [SerializeField] private float _rotationTime = 0.5f;
    [SerializeField] private bool _moveOnX = true;
    [SerializeField] private bool _moveOnZ = false;
    [SerializeField] private float _minPosition = -2.5f;
    [SerializeField] private float _maxPosition = 2.5f;

    private Vector3 _movement;
    private Transform _enemyTransform;

    [Header("Enemy Animations")]
    [SerializeField] private Animator _animator;

    [Header("Enemy Rotation Settings")]
    private bool _isRotating = false;
    private bool _isMovingForward = true;
    private bool _isMovingBlocked = false;

    [SerializeField] private PlayerDamageSystem _playerDamageSystem;

    void Start()
    {
        _enemyTransform = transform;
    }

    private void Update()
    {
        if (!_isRotating && !_isMovingBlocked)
        {
            if (_moveOnX)
                MoveOnAxis(Vector3.right, _minPosition, _maxPosition);
            else if (_moveOnZ)
                MoveOnAxis(Vector3.forward, _minPosition, _maxPosition);
        }
    }

    private void MoveOnAxis(Vector3 direction, float minPosition, float maxPosition)
    {
        _movement = direction * _moveSpeed * Time.deltaTime;
        _enemyTransform.position += _movement;

        float currentPosition = _moveOnX ? _enemyTransform.position.x : _enemyTransform.position.z;

        if ((_isMovingForward && currentPosition >= maxPosition) || (!_isMovingForward && currentPosition <= minPosition))
        {
            StartCoroutine(TurnAndMove());
        }
    }

    private IEnumerator TurnAndMove()
    {
        _isRotating = true;
        _isMovingBlocked = true;

        if (_animator != null)
        {
            _animator.enabled = false;
        }

        Quaternion startRotation = _enemyTransform.rotation;
        Quaternion endRotation = startRotation * Quaternion.Euler(0f, 180f, 0f);

        float time = 0f;
        while (time < _rotationTime)
        {
            time += Time.deltaTime;
            _enemyTransform.rotation = Quaternion.Slerp(startRotation, endRotation, time / _rotationTime);
            yield return null;
        }

        _isRotating = false;
        _isMovingBlocked = false;
        _isMovingForward = !_isMovingForward;
        _moveSpeed *= -1f;

        if (_animator != null)
        {
            _animator.enabled = true;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            Vector3 hitNormal = other.transform.position - transform.position;
            _playerDamageSystem.Damage(hitNormal.normalized);
        }
    }
}
