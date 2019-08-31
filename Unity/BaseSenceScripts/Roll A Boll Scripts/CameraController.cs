using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{

    public GameObject shere;

    //球每一帧的变化
    private Vector3 offset;  

    //初始化摄像头的位置
    void Start()
    {
        //球的变化的位置量 + 镜头初始化的位置 = 当前镜头的位置
        offset = transform.position - shere.transform.position;
    }

    // 视野随着球的变化而变化
    void LateUpdate()
    {
        //每一帧的位置 + 摄像机的位置 
        transform.position = shere.transform.position + offset; 
         
    }
}
