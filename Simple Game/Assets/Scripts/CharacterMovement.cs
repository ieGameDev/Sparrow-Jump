using UnityEngine;

[RequireComponent(typeof(CharacterController))]
public class CharacterMovement : MonoBehaviour
{
    [Header("Character movement stats")]
    [SerializeField] private float _moveSpeed;
    [SerializeField] private float _rotateSpeed;

    [Header("Character Animations")]
    [SerializeField] private Animator _animator;

    [Header("Gravity handling")]
    private float _gravityForce = 9.8f;
    public float GravityForce
    {
        set
        {
            if (value >= 0)
                _gravityForce = value;
        }
    }

    [Header("Character components")]
    private CharacterController _characterController;

    [HideInInspector] public Vector3 VelocityDirection;

    private void Start()
    {
        _characterController = GetComponent<CharacterController>();
    }

    private void Update()
    {
        GravityHandling();
    }

    public void MoveCharacter(Vector3 moveDirection)
    {
        VelocityDirection.x = moveDirection.x * _moveSpeed;
        VelocityDirection.z = moveDirection.z * _moveSpeed; 
        _characterController.Move(VelocityDirection * Time.deltaTime);

        if (_animator != null)
        {
            bool isMoving = moveDirection.x != 0 || moveDirection.z != 0;
            _animator.SetBool("Run", isMoving);
        }
    }

    public void RotateCharacter(Vector3 moveDirection)
    {
        if (_characterController.isGrounded)
        {
            if (Vector3.Angle(transform.forward, moveDirection) > 0)
            {
                Vector3 newDirection = Vector3.RotateTowards(transform.forward, moveDirection, _rotateSpeed, 0);
                transform.rotation = Quaternion.LookRotation(newDirection);
            }
        }
    }

    private void GravityHandling()
    {
        if (!_characterController.isGrounded)
        {
            VelocityDirection.y -= _gravityForce * Time.deltaTime;
        }
    }
}
