using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FalconNPC : MonoBehaviour
{
    public Transform LeftUpPos;
    public Transform RightUpPos;

    public float offsetVertical;
    public float SpeedY;

    SpriteRenderer spriteRenderer;

    Vector3 dirX;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    private void Start()
    {
        transform.position = LeftUpPos.position;
        dirX = Vector3.right;
        StartCoroutine(MoveVertical());
    }
    private void Update()
    {

        var hInput = Input.GetAxisRaw("Horizontal");

        if (hInput < 0)
        {
            dirX = Vector3.left;
            spriteRenderer.flipX = true;
        }
        else if (hInput > 0)
        {
            dirX = Vector3.right;
            spriteRenderer.flipX = false;
        }

        if (dirX == Vector3.right && (transform.position.x != LeftUpPos.position.x))
        {
            var targetPosition = new Vector3(LeftUpPos.position.x, transform.position.y, 0);
            transform.position = Vector3.Lerp(transform.position, targetPosition, 0.075f);
        }

        if (dirX == Vector3.left && (transform.position.x != RightUpPos.position.x))
        {
            var targetPosition = new Vector3(RightUpPos.position.x, transform.position.y, 0);
            transform.position = Vector3.Lerp(transform.position, targetPosition, 0.075f);
        }
    }

    IEnumerator MoveVertical()
    {
        var direction = 1f;

        while (true)
        {
            if (transform.position.y < LeftUpPos.position.y - offsetVertical)
            {
                direction = 1f;
            }
            else if (transform.position.y > LeftUpPos.position.y)
            {
                direction = -1f;
            }

            transform.Translate(Vector3.up * Time.deltaTime * direction * SpeedY);

            yield return null;
        }
    }
}
