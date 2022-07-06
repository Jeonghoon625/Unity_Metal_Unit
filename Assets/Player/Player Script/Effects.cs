using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Effects : MonoBehaviour
{
    public Transform LeftPos;
    public Transform RightPos;

    SpriteRenderer spriteRenderer;

    Vector3 dirX;

    public VirtualJoystick joystick;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    private void Start()
    {
        transform.position = LeftPos.position;
        dirX = Vector3.right;
    }

    private void Update()
    {
        var hInput = Input.GetAxisRaw("Horizontal");
        hInput = joystick.GetAxisRaw("Horizontal");

        if (hInput < 0)
        {
            dirX = Vector3.left;
            spriteRenderer.flipX = false;
        }
        else if (hInput > 0)
        {
            dirX = Vector3.right;
            spriteRenderer.flipX = true;
        }

        if (dirX == Vector3.right && (transform.position.x != LeftPos.position.x))
        {
            var targetPosition = new Vector3(LeftPos.position.x, transform.position.y, 0);
            transform.position = targetPosition;
        }

        if (dirX == Vector3.left && (transform.position.x != RightPos.position.x))
        {
            var targetPosition = new Vector3(RightPos.position.x, transform.position.y, 0);
            transform.position = targetPosition;
        }
    }
}
