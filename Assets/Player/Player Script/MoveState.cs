using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveState : IState
{
    private Player player;
    private GameObject playerGO;
    private Animator animator;
    private SpriteRenderer spriteRenderer;
    private Rigidbody2D rigid;

    bool isWalk = false;
    bool isJump = false;
    bool isFall = false;
    bool isGround = false;

    Coroutine coWalk;
    Coroutine coJump;

    private float jumpPower = 6f;

    private float jumpTimeLimit = 0.1f;
    private float jumpTimer = 0;

    private float axisX = 0;

    public void OnEnter(Player player)
    {
        this.player = player;
        playerGO = player.gameObject;
        animator = playerGO.GetComponent<Animator>();
        spriteRenderer = playerGO.GetComponent<SpriteRenderer>();
        rigid = playerGO.GetComponent<Rigidbody2D>();

        coWalk = player.StartCoroutine(Walk());
        coJump = player.StartCoroutine(Jump());
    }

    public void OnUpdate()
    {
        

        /*
        if (Input.GetMouseButtonDown(0))
        {
            player.SetState("AttackState");
        }
        */
    }

    public void OnFixedUpdate()
    {
        RaycastHit2D rayHit = Physics2D.Raycast(rigid.position, Vector3.down, 1.1f, LayerMask.GetMask("Platform"));
        Debug.DrawRay(rigid.position, Vector3.down * 1.1f, new Color(1, 1, 1));

        if (rayHit.collider != null)
        {
            isGround = true;

        }
        else
        {
            isGround = false;
        }

        playerGO.transform.position += Vector3.right * axisX * player.WalkSpeed * Time.deltaTime;

        if (!isWalk && !isJump && !isFall)
        {
            player.StopCoroutine(coWalk);
            player.StopCoroutine(coJump);
            player.SetState("IdleState");
        }
    }

    public void OnExit()
    {
        player.prevState = "MoveState";
    }

    IEnumerator Walk()
    {
        while(true)
        {
            axisX = Input.GetAxisRaw("Horizontal");

            if (axisX != 0)
            {
                isWalk = true;
                animator.SetBool("isWalk", true);

                spriteRenderer.flipX = axisX < 0 ? true : false;
            }
            else
            {
                isWalk = false;
                animator.SetBool("isWalk", false);
            }

           

            yield return null;
        }
    }

    IEnumerator Jump()
    {
        while (true)
        {
            if(Input.GetButtonDown("Jump"))
            {
                isJump = true;
                animator.SetBool("isJump", true);
                rigid.AddForce(Vector2.up * jumpPower, ForceMode2D.Impulse);
            }

            
            if(rigid.velocity.y <= 0f)
            {
                isJump = false;
                animator.SetBool("isJump", false);

                if (!isGround)
                {
                    isFall = true;
                    animator.SetBool("isFall", true);
                }
                else
                {
                    isFall = false;
                    animator.SetBool("isFall", false);
                }
            }
            
            yield return null;
        }
    }

    IEnumerator Fall()
    {
        while (true)
        {
            if (rigid.velocity.y < 0f)
            {
                isJump = false;
                animator.SetBool("isJump", false);

                if (!isGround)
                {
                    isFall = true;
                    animator.SetBool("isFall", true);
                }
                else
                {
                    isFall = false;
                    animator.SetBool("isFall", false);
                }
            }

            yield return null;
        }
    }

    /*
    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.tag == "Platform")
        {
            isGround = true;
        }
    }
    */
}
