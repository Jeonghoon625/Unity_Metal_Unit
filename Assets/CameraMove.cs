using UnityEngine;
using System.Collections;

public class CameraMove : MonoBehaviour
{
    public Transform Player;

    void LateUpdate()
    {
        transform.position = new Vector3(Player.position.x, Player.position.y, -10);
    }
}