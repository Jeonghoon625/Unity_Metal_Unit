using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun : MonoBehaviour
{
    public GameObject bullet;
    public Transform muzzle_Left;
    public Transform muzzle_Right;

    private float shotTime;

    public Transform GunPos_Left;
    public Transform GunPos_Right;

    public Player player;

    private void Awake()
    {
        if (player.gameObject.GetComponent<SpriteRenderer>().flipX)
        {
            this.gameObject.GetComponent<SpriteRenderer>().flipX = true;
            transform.position = GunPos_Left.position;
        }
        else
        {
            this.gameObject.GetComponent<SpriteRenderer>().flipX = false;
            transform.position = GunPos_Right.position;
        }
    }

    private void Update()
    {
        if (player.gameObject.GetComponent<SpriteRenderer>().flipX)
        {
            this.gameObject.GetComponent<SpriteRenderer>().flipX = true;
            transform.position = GunPos_Left.position;
        }
        else
        {
            this.gameObject.GetComponent<SpriteRenderer>().flipX = false;
            transform.position = GunPos_Right.position;
        }
    }
    public void Fire()
    {
        if (player.gameObject.GetComponent<SpriteRenderer>().flipX)
        {
            Instantiate(bullet, muzzle_Left.position, Quaternion.identity);
        }
        else
        {
            Instantiate(bullet, muzzle_Right.position, Quaternion.identity);
        }
    }
}