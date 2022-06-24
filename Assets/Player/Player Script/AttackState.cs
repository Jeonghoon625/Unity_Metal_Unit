using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackState : IState
{
    private Player player;
    private GameObject playerGO;
    private Animator animator;
    private SpriteRenderer spriteRenderer;

    int atkNum = 0;

    private float curTime = 0f;
    public float coolTime = 0.5f;

    bool ableCombo = false;

    public void OnEnter(Player player)
    {
        this.player = player;
        playerGO = player.gameObject;
        animator = playerGO.GetComponent<Animator>();
        spriteRenderer = playerGO.GetComponent<SpriteRenderer>();

        //player.StartCoroutine(timer());
        //atkNum = 0;
        animator.SetTrigger("Atk");
    }

    public void OnUpdate()
    {
        if (curTime < coolTime)
        {
            curTime += Time.deltaTime;

            if (Input.GetMouseButtonDown(0))
            {
                Debug.Log("Combo");
                animator.SetTrigger("Combo");
                curTime = 0;
            }
            
        }
        else
        {
            if (!(Input.GetMouseButtonDown(0)))
            {
                player.SetState("AttackState");
            }
        }
    }

    public void OnExit()
    {
        animator.SetBool("isAttack", false);
    }

    public void PlayAnimation(int atkNum)
    {
        animator.SetFloat("Blend", atkNum);
        animator.SetTrigger("Atk");
    }

    public void OnFixedUpdate()
    {
    }

    /*
    public IEnumerator timer()
    {
        while (true)
        {
            if (currentTime < coolTime)
            {
                currentTime += Time.deltaTime;
                ableCombo = true;
            }
            else
            {
                currentTime = 0;
                ableCombo = false;
            }
            yield return null;
        }
    }

    public void SetAtk()
    {
        player.StartCoroutine();
    }
    */
}
