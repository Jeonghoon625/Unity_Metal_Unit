using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class VirtualButton : MonoBehaviour
{
    public bool isJumpButtonDown = false;
    public bool isJumpButtonPressed = false;
    public bool isJumpButtonDownPlatform = false;

    public bool isDashButtonDown = false;

    public bool isSitButtonDown = false;
    public bool isSitButtonPressed = false;
    public bool isSitButtonUp = false;

    public bool isDownButtonDown = false;

    private void Awake()
    {
    }

    public void JumpDown()
    {
        isJumpButtonDown = true;
        isJumpButtonPressed = true;
        isJumpButtonDownPlatform = true;
    }

    public void JumpUp()
    {
        isJumpButtonDown = false;
        isJumpButtonPressed = false;
    }

    public void DashDown()
    {
        isDashButtonDown = true;
    }

    public void SitDown()
    {
        isSitButtonDown = true;
        isSitButtonPressed = true;
    }

    public void SitUp()
    {
        isSitButtonDown = false;
        isSitButtonPressed = false;
        isSitButtonUp = true;
    }

    public void DownDown()
    {
        isDownButtonDown = true;
    }
}
