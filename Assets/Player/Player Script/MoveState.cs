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
    bool isDash = false;

    Coroutine coWalk;
    Coroutine coJump;
    Coroutine coDash;

    private float jumpTimeLimit = 0.25f;
    private float jumpTimer = 0f;
    private int jumpCount = 0;

    private float dashTimeLimit = 0.3f;
    private float dashTimer = 0f;

    private float axisX = 0;

    private Vector3 direction;
    private float dashY = 0f;

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
        coDash = player.StartCoroutine(Dash());
    }

    public void OnUpdate()
    {
        if (Input.GetMouseButtonDown(1))
        {
            player.StopCoroutine(coWalk);
            player.StopCoroutine(coJump);
            player.StopCoroutine(coDash);
            animator.SetBool("isGround", true);
            player.SetState("AttackState");
        }
    }

    public void OnFixedUpdate()
    {
        //땅 체크
        rayHits[0] = Physics2D.Raycast(new Vector3(rigid.position.x - (playerCol.bounds.size.x / 2), rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down, 0.2f, LayerMask.GetMask("Platform"));
        Debug.DrawRay(new Vector3(rigid.position.x - (playerCol.bounds.size.x / 3), rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down * 0.2f, new Color(1, 1, 1));

        rayHits[1] = Physics2D.Raycast(new Vector3(rigid.position.x, rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down, 0.2f, LayerMask.GetMask("Platform"));
        Debug.DrawRay(new Vector3(rigid.position.x, rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down * 0.2f, new Color(1, 1, 1));

        rayHits[2] = Physics2D.Raycast(new Vector3(rigid.position.x + (playerCol.bounds.size.x / 2), rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down, 0.2f, LayerMask.GetMask("Platform"));
        Debug.DrawRay(new Vector3(rigid.position.x + (playerCol.bounds.size.x / 3), rigid.position.y - (playerCol.bounds.size.y / 2), 0), Vector3.down * 0.2f, new Color(1, 1, 1));

        foreach (var rayHit in rayHits)
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

        if (!isDash && isWalk) //걷기
        {
            player.direction = new Vector3(axisX, 0, 0);
            playerGO.transform.position += Vector3.right * axisX * player.WalkSpeed * Time.deltaTime;
        }
        else if(isDash)//대쉬
        {
            playerGO.transform.position += direction * 1.5f * player.WalkSpeed * Time.deltaTime;
            playerGO.transform.position =  new Vector3(playerGO.transform.position.x, dashY, 0);
        }

        //낙하
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
        else if (rigid.velocity.y == 0)
        {
            if(isGround)
            {
                jumpCount = 0;
                isFall = false;
                animator.SetBool("isFall", false);
                animator.SetBool("isJump", false);
            }
        }

        //움직이지않고있는 상태
        if (!isWalk && !isJump && !isFall && !isDash)
        {
            player.StopCoroutine(coWalk);
            player.StopCoroutine(coJump);
            player.StopCoroutine(coDash);
            animator.SetBool("isGround", true);
            player.SetState("IdleState");
        }
    }

    public void OnExit()
    {
        player.prevState = "MoveState";
    }

    IEnumerator Walk()
    {
        while (true)
        {
            axisX = Input.GetAxisRaw("Horizontal");

            if (axisX != 0)
            {
                isWalk = true;
                animator.SetBool("isWalk", true);

                spriteRenderer.flipX = axisX < 0;
            }
            else
            {
                isWalk = false;
                animator.SetBool("isWalk", false);
            }

            yield return null;
        }
    }

    IEnumerator Dash()
    {
        while (true)
        {
            if (Input.GetKeyDown(KeyCode.LeftShift) && !isDash)
            {
                isDash = true;

                direction = Vector3.right;
                dashY = playerGO.transform.position.y;

                if (spriteRenderer.flipX)
                {
                    direction = Vector3.left;
                    player.direction = Vector3.left;
                }

                rigid.velocity = Vector2.zero;
            }

            if(isDash)
            {
                dashTimer += Time.deltaTime;

                animator.SetBool("isDash", true);

                if (dashTimer > dashTimeLimit)
                {
                    animator.SetBool("isDash", false);
                    isDash = false;
                    dashTimer = 0;
                }
            }
            
            yield return null;
        }
    }

    IEnumerator Jump()
    {
        while (true)
        {
            if (Input.GetButtonDown("Jump"))
            {
                jumpTimer = 0;
                jumpCount--;
                isJump = true;
                animator.SetBool("isJump", true);

                if (jumpCount == -1 && isGround)
                {
                    GameObject.Instantiate(player.Effect_JumpOnGround_Prefab, player.EffectPos_Jump.transform.position, Quaternion.identity);
                }
                else if (jumpCount == -2)
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
}
