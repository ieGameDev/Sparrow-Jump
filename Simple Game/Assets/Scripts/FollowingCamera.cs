using UnityEngine;

public class FollowingCamera : MonoBehaviour
{
    [Header("Object for following")]
    [SerializeField] private GameObject _mainCharacter;

    [Header("Camera properties")]
    [SerializeField] private float _returnSpeed;
    [SerializeField] private float _height;
    [SerializeField] private float _rearDistance;
    private Vector3 _currentVector;

    private void Start()
    {
        transform.position = new Vector3(_mainCharacter.transform.position.x, _mainCharacter.transform.position.y + _height, _mainCharacter.transform.position.z - _rearDistance);
        transform.rotation = Quaternion.LookRotation(_mainCharacter.transform.position - transform.position);
    }

    private void LateUpdate()
    {
        if (_mainCharacter != null)
        {
            CameraMove();
        }
    }

    private void CameraMove()
    {
        _currentVector = new Vector3(_mainCharacter.transform.position.x, _mainCharacter.transform.position.y + _height, _mainCharacter.transform.position.z - _rearDistance);
        transform.position = Vector3.Lerp(transform.position, _currentVector, _returnSpeed * Time.deltaTime);
    }
}
