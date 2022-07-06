using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class VirtualJumpButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public Image point;

    public bool isJumpButtonDown = false;
    public bool isJumpButtonUp = false;
    public bool isJumpButtonPressed = false;

    public void OnPointerUp(PointerEventData eventData)
    {
        isJumpButtonDown = false;
        isJumpButtonPressed = false;
        isJumpButtonUp = false;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        isJumpButtonDown = false;
        isJumpButtonPressed = false;
        isJumpButtonUp = false;
    }

    private void Awake()
    {
        isJumpButtonDown = false;
        isJumpButtonPressed = false;
        isJumpButtonUp = false;
    }

}
