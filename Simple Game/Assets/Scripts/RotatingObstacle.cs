using UnityEngine;

public class RotatingObstacle : MonoBehaviour
{
    [SerializeField]
    private float rotationSpeed = 30f;

    [SerializeField]
    private bool rotateClockwise = true;

    void Update()
    {
        int direction = rotateClockwise ? 1 : -1;
        transform.Rotate(Vector3.forward, rotationSpeed * direction * Time.deltaTime);
    }
}
