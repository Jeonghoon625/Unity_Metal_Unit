using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public float speed = 5f;
    public float lifeTime = 2f;

    public Vector3 direction;

    void Start()
    {
        Player player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();

        if (player.gameObject.GetComponent<SpriteRenderer>().flipX)
        {
            this.gameObject.GetComponent<SpriteRenderer>().flipX = true;
            direction = Vector3.left;
        }
        else
        {
            this.gameObject.GetComponent<SpriteRenderer>().flipX = false;
            direction = Vector3.right;
        }

        Destroy(gameObject, lifeTime);
    }

    void Update()
    {
       transform.Translate(direction * speed * Time.deltaTime);
    }
}