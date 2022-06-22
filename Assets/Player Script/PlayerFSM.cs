
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum PlayerState
{
    Idle,
    Walk,
    Jump,
    Fall,
}

public class PlayerFSM : MonoBehaviour
{
    private PlayerState playerState;

    private Animator animator;
    private Rigidbody2D rigid;

    [SerializeField]
    [Range(1f, 10f)]
    float walkSpeed = 3f;

    [SerializeField]
    [Range(1f, 10f)]
    float jumpPower = 3f;

    private void Awake()
    {
        rigid = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        ChangeState(PlayerState.Idle);
    }

    private void Update()
    {
        if(Input.GetAxisRaw("Horizontal") != 0)
        {
            ChangeState(PlayerState.Walk);
        }

        if (Input.GetButtonDown("Jump"))
        {
            ChangeState(PlayerState.Jump);
        }
    }

    private void FixedUpdate()
    {
        if (rigid.velocity.y < 0)
        {
            ChangeState(PlayerState.Fall);
        }
    }

    private void ChangeState(PlayerState newState)
    {
        StopCoroutine(playerState.ToString());
        playerState = newState;
        StartCoroutine(playerState.ToString());
    }

    private IEnumerator Walk()
    {
        float flipMove = 0f;
        animator.SetBool("isWalk", true);

        while (true)
        {
            if (Input.GetAxisRaw("Horizontal") < 0)
            {
                flipMove = -1;
                transform.localScale = new Vector3(-1f, 1f, 1f);
            }
            else if (Input.GetAxisRaw("Horizontal") > 0)
            {
                flipMove = 1;
                transform.localScale = new Vector3(1f, 1f, 1f);
            }

            transform.Translate(flipMove * walkSpeed * Time.deltaTime, 0f, 0f);
            yield return null;
            ChangeState(PlayerState.Idle);
        }
    }

    private IEnumerator Jump()
    {
        animator.SetTrigger("isJump");
        rigid.AddForce(Vector2.up * jumpPower, ForceMode2D.Impulse);

        while (true)
        {
            yield return null;
        }
    }

    private IEnumerator Fall()
    {
        animator.SetTrigger("isFall");

        while (true)
        {
            yield return null;
            ChangeState(PlayerState.Idle);
        } 
    }

    private IEnumerator Land()
    {
        animator.SetTrigger("isLand");

        while (true)
        {
            yield return null;
        }
    }

    private IEnumerator Idle()
    {
        animator.SetBool("isWalk", false);

        while (true)
        {
            yield return null;
        }
    }
}

