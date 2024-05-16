using UnityEngine;

public class DamageObstacle : MonoBehaviour
{
    [SerializeField] private PlayerDamageSystem _playerDamageSystem;

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            Vector3 hitNormal = other.transform.position - transform.position;
            _playerDamageSystem.Damage(hitNormal.normalized);
        }
    }
}
