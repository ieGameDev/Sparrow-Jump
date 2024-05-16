using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class Yandex : MonoBehaviour
{
    //[DllImport("__Internal")]
    //private static extern void TypeOfDevice();

    [SerializeField] private Image _jumpButtonImage;    
    [SerializeField] private Image _movementJoystickBackgroundImage;    
    [SerializeField] private Image _movementJoystickImage;    

    private void Awake()
    {
        //TypeOfDevice();
    }

    public void SetDevice(int isMobile)
    {
        if (isMobile == 0)
        {
            if (_jumpButtonImage != null)
                _jumpButtonImage.enabled = false;
            if (_movementJoystickBackgroundImage != null)
                _movementJoystickBackgroundImage.enabled = false;
            if (_movementJoystickImage != null)
                _movementJoystickImage.enabled = false;
        }
        else
        {
            if (_jumpButtonImage != null)
                _jumpButtonImage.enabled = true;
            if (_movementJoystickBackgroundImage != null)
                _movementJoystickBackgroundImage.enabled = true;
            if (_movementJoystickImage != null)
                _movementJoystickImage.enabled = true;
        }
    }
}
