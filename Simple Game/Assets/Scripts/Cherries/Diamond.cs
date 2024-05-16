using UnityEngine;

public class Diamond : MonoBehaviour
{
    [Header("Moving Settengs")]
    [SerializeField] private float _rotationSpeed;

    [Header("Visual Effect")]
    [SerializeField] private ParticleSystem _particleSystem;

    void Update()
    {
        transform.Rotate(0, _rotationSpeed * Time.deltaTime, 0);
    }

    private void OnTriggerEnter(Collider other)
    {
        FindObjectOfType<DiamondManager>().AddOne();

        Instantiate(_particleSystem, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }
}
