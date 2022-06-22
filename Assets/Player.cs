using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    private PlayerState playerState;

    private IState currentState;

    [SerializeField]
    [Range(1f, 10f)]
    float walkSpeed = 3f;

    [SerializeField]
    [Range(1f, 10f)]
    float jumpPower = 3f;

    public float WalkSpeed
    {
        get
        {
            return walkSpeed;
        }
    }

    public float JumpPower
    {
        get
        {
            return jumpPower;
        }
    }

    private void Awake()
    {
        SetState(new IdleState());
    }

    private void Update()
    {
        currentState.OnUpdate();
    }

    public void SetState(IState nextState)
    {
        if (currentState != null)
        {
            currentState.OnExit();
        }

        currentState = nextState;
        currentState.OnEnter(this);
    }

   
}
