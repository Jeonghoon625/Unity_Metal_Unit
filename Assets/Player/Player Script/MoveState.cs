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

    private RaycastHit2D[] rayHits = new RaycastHit2D[3];
    private Collider2D playerCol;

    bool isWalk = false;
    bool isJump = false;
    bool isFall = false;
    bool isGround = false;

    Coroutine coWalk;
    Coroutine coJump;

    private float jumpTimeLimit = 0.5f;
    private float jumpTimer = 0;
    private int jumpCount = 0;

    private float axisX = 0;

    public void OnEnter(Player player)
    {
        this.player = player;
        playerGO = player.gameObject;
        animator = playerGO.GetComponent<Animator>();
        spriteRenderer = playerGO.GetComponent<SpriteRenderer>();
        rigid = playerGO.GetComponent<Rigidbody2D>();
        playerCol = playerGO.GetComponent<BoxCollider2D>();

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
        //¶¥Ã¼Å©
        rayHits[0] = Physics2D.Raycast(new Vector3(rigid.position.x - (playerCol.bounds.size.x / 2), rigid.position.y, 0), Vector3.down, 1.1f, LayerMask.GetMask("Platform"));
        Debug.DrawRay(new Vector3(rigid.position.x - (playerCol.bounds.size.x / 3), rigid.position.y, 0), Vector3.down * 1.1f, new Color(1, 1, 1));

        rayHits[1] = Physics2D.Raycast(new Vector3(rigid.position.x, rigid.position.y, 0), Vector3.down, 1.6f, LayerMask.GetMask("Platform"));
        Debug.DrawRay(new Vector3(rigid.position.x, rigid.position.y, 0), Vector3.down * 1.1f, new Color(1, 1, 1));

        rayHits[2] = Physics2D.Raycast(new Vector3(rigid.position.x + (playerCol.bounds.size.x / 2), rigid.position.y, 0), Vector3.down, 1.6f, LayerMask.GetMask("Platform"));
        Debug.DrawRay(new Vector3(rigid.position.x + (playerCol.bounds.size.x / 3), rigid.position.y, 0), Vector3.down * 1.1f, new Color(1, 1, 1));

        foreach(var rayHit in rayHits)
        {
            if (rayHit.collider != null)
            {
                isGround = true;
                break;
            }
            else
            {
                isGround = false;
            }
        }

        //°È±â
        playerGO.transform.position += Vector3.right * axisX * player.WalkSpeed * Time.deltaTime;

        if (rigid.velocity.y < 0f)
        {
            isJump = false;
            animator.SetBool("isJump", false);

            isWalk = false;
            animator.SetBool("isWalk", false);

            if (!isGround)
            {
                isFall = true;
                animator.SetBool("isFall", true);
            }
            else
            {
                jumpCount = 0;
                isFall = false;
                animator.SetBool("isFall", false);
            }
        }

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
            /*
            if(Input.GetButtonDown("Jump"))
            {
                isJump = true;
                animator.SetBool("isJump", true);
                rigid.AddForce(Vector2.up * player.JumpPower, ForceMode2D.Impulse);
            }
            */
            if(Input.GetButtonDown("Jump"))
            {
                jumpTimer = 0;
                jumpCount--;
                isJump = true;
                animator.SetBool("isJump", true);

                if(jumpCount == -1)
                {
                    GameObject.Instantiate(player.Effect_JumpOnGround_Prefab, player.EffectPos_Jump.transform.position, Quaternion.identity);
                }
                else if(jumpCount == -2)
                {
                    GameObject.Instantiate(player.Effect_JumpOnAir_Prefab, player.EffectPos_Jump.transform.position, Quaternion.identity);
                }

            }

            if (Input.GetButton("Jump") && jumpTimer <= jumpTimeLimit && jumpCount >= -2)
            {
                rigid.velocity = Vector2.zero;
                rigid.AddForce(Vector2.up * player.JumpPower, ForceMode2D.Impulse);
            }

            jumpTimer += Time.deltaTime;

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
