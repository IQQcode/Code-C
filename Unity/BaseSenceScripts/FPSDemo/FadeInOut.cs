using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/**
 * 控制屏幕渐隐渐现
 */
public class FadeInOut : MonoBehaviour {

    //渐隐渐现的速率
    public float fadeSpeed = 1.0f;
    //标识位表示场景是否开始
    private bool sceneStarting = true;
    //GUI组件
    private GUITexture tex;

    void Start()
    {
        tex = this.GetComponent<GUITexture>();
        //位置(0,0) 大小(整个屏幕)
        tex.pixelInset = new Rect(0, 0, Screen.width, Screen.height);
    }

    void Update()
    {
        if (sceneStarting)
        {
            StartScene();
        }
    }

    /**
     * 渐隐
     */
    private void FadeToClear()
    {
        tex.color = Color.Lerp(tex.color, Color.clear, fadeSpeed * Time.deltaTime);
    }

    /**
     * 渐现
     */
    private void FadeToBlack()
    {
        tex.color = Color.Lerp(tex.color, Color.black, fadeSpeed * Time.deltaTime);

    }

    /**
     * 场景开始
     */
     private void StartScene()
    {
        FadeToClear();
        if(tex.color.a <= 0.05f)
        {
            tex.color = Color.clear;
            tex.enabled = false;
            sceneStarting = false;
        }
    }

    /**
     * 场景结束
     */
    private void EndScene()
    {
        tex.enabled = true;
        FadeToBlack();
        if(tex.color.a >= 0.95f)
        {
            SceneManager.LoadScene("Demo");
        }
    }
}
