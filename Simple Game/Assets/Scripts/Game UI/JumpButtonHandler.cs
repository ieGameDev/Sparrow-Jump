using UnityEngine;
using UnityEngine.EventSystems;

public class JumpButtonHandler : MonoBehaviour, IPointerDownHandler
{
    [SerializeField] private CharacterJumpHandler _characterJumpHandler;

    private void Update()
    {
        if (Input.GetButton("Jump"))
        {
            _characterJumpHandler.HandleJump();
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        _characterJumpHandler.HandleJump();
    }
}
