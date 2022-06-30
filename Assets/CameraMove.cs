using UnityEngine;
using System.Collections;

public class CameraMove : MonoBehaviour
{
    public Transform playerPos;

    public Vector3 offset;
    public float cameraSpeed = 3f;
    public float mapX_Min, mapX_Max, mapY_Min, mapY_Max;
    float Width, Height;

    private void Awake()
    {
        //transform.position = new Vector3(-1, 0, -15);
    }
    private void Start()
    {
        //Camera.main.aspect => width/height ratio
        //Camera.main.orthographicSize => Inspector camera Size 
        Width = Camera.main.aspect * Camera.main.orthographicSize;
        Height = Camera.main.orthographicSize;
    }

    private void FixedUpdate()
    {
        float moveX = Mathf.Clamp(playerPos.position.x + offset.x, mapX_Min + Width, mapX_Max - Width);
        float moveY = Mathf.Clamp(playerPos.position.y + offset.y, mapY_Min + Height, mapY_Max - Height);
        Vector3 movePosition = new Vector3(moveX, moveY, -15);
        transform.position = Vector3.Lerp(transform.position, movePosition, Time.deltaTime * cameraSpeed);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
    }
}