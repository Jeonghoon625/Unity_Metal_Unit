using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleSceneController : MonoBehaviour
{
    private void Awake()
    {
        Application.runInBackground = true;
        //������ ��Ŀ�� X => ������ ��� ����.
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            SceneLoader.LoadScene("GameScene");
        }
    }
}
