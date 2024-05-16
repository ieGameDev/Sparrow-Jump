using UnityEngine;

public class MovingPlatform : MonoBehaviour
{
    [Header("Moving Settings")]
    [SerializeField] private float _moveSpeed = 3f;
    [SerializeField] private float _minPosition = -5f;
    [SerializeField] private float _maxPosition = 5f;
    [SerializeField] private bool _moveX = true;
    [SerializeField] private bool _moveY = false;
    [SerializeField] private bool _moveZ = false;

    private Vector3 _movement;
    private Transform _platformTransform;
    private float _currentPosition;
    private bool _movingTowardsMax = true;

    private void Start()
    {
        _platformTransform = transform;
        if (_moveX)
            _currentPosition = _platformTransform.position.x;
        else if (_moveY)
            _currentPosition = _platformTransform.position.y;
        else if (_moveZ)
            _currentPosition = _platformTransform.position.z;
    }

    private void LateUpdate()
    {
        if (_moveX)
            Move(_platformTransform.right);
        else if (_moveY)
            Move(_platformTransform.up);
        else if (_moveZ)
            Move(_platformTransform.forward);
    }

    private void Move(Vector3 direction)
    {
        _movement = direction * _moveSpeed * Time.deltaTime;
        _platformTransform.position += _movement;

        if (_moveX)
            _currentPosition = _platformTransform.position.x;
        else if (_moveY)
            _currentPosition = _platformTransform.position.y;
        else if (_moveZ)
            _currentPosition = _platformTransform.position.z;

        if ((_currentPosition <= _minPosition && !_movingTowardsMax) || (_currentPosition >= _maxPosition && _movingTowardsMax))
        {
            _moveSpeed *= -1f;
            _movingTowardsMax = !_movingTowardsMax;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            other.transform.parent = _platformTransform;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            other.transform.parent = null;
        }
    }
}
