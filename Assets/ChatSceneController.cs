using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ChatSceneController : MonoBehaviour
{
    public SceneFade fade;
    public TextMeshProUGUI ChatText;
    public TextMeshProUGUI CharacterName;

    public GameObject leftPos;
    public GameObject rightPos;
    public GameObject centerPos;
    public GameObject Canverse;

    public string writerText = "";

    private bool isChat = false;

    private void Awake()
    {
        Application.runInBackground = true;
        //������ ��Ŀ�� X => ������ ��� ����.
        leftPos.SetActive(false);
        rightPos.SetActive(false);
        centerPos.SetActive(false);
    }

    private void Start()
    {
        StartCoroutine(ChatSystem());
    }

    IEnumerator ChatSystem()
    {
        yield return StartCoroutine(NormalChat("���ְ�", "��޻�Ȳ �߻�"));
        yield return StartCoroutine(NormalChat("���ְ�", "��� �������� 911"));
        yield return StartCoroutine(NormalChat("���ְ�", "���� �����ҿ��� ���� ȭ�簡 �߻��ߴ�"));
        yield return StartCoroutine(NormalChat("���ְ�", "�����, �ż��� �����ҷ� �̵�, ȭ�縦 �����϶�"));
        yield return StartCoroutine(NormalChat("����", "��, �˰ڽ��ϴ�. ���ְ���"));
        yield return StartCoroutine(NormalChat("����", "ȭ���� ���������� �����Դϱ�?"));
        yield return StartCoroutine(NormalChat("���ְ�", "�װ��� �������� ���������ʾҴ�."));
        yield return StartCoroutine(NormalChat("���ְ�", "���� �Ű��ڴ� Ǫ������ ������ ���Ҵٰ��ϳ�..."));
        yield return StartCoroutine(NormalChat("���ְ�", "�켱 ȭ�� ������ �ֿ켱�����ϵ���"));
        yield return StartCoroutine(NormalChat("����", "��, �˰ڽ��ϴ�."));
        yield return StartCoroutine(NormalChat("����", ""));
        yield return StartCoroutine(NormalChat("���ְ�", "..."));
        yield return StartCoroutine(NormalChat("", "�������� �����ΰ�..."));
        isChat = true;
    }

    IEnumerator NormalChat(string narrator, string narration)
    {
        int a = 0;
        CharacterName.text = narrator;
        writerText = "";

        if(narrator == "����")
        {
            leftPos.SetActive(true);
            rightPos.SetActive(false);
            centerPos.SetActive(false);
        }
        else if(narrator == "���ְ�")
        {
            leftPos.SetActive(false);
            rightPos.SetActive(true);
            centerPos.SetActive(false);
        }
        else
        {
            leftPos.SetActive(false);
            rightPos.SetActive(false);
            centerPos.SetActive(true);
        }

        for (a = 0; a < narration.Length; a++)
        {
            writerText += narration[a];
            ChatText.text = writerText;
            yield return null;
        }

        while (true)
        {
            if(Input.GetKeyDown(KeyCode.Return) || Input.touchCount > 0)
            {
                break;
            }

            yield return null;
        }
    }

    private void Update()
    {
        if(isChat)
        {
            fade.isChanged = true;

            leftPos.SetActive(false);
            rightPos.SetActive(false);
            centerPos.SetActive(false);

            if (fade.isEnd)
            {
                SceneLoader.LoadScene("GameScene");
            }
        }
    }
}
