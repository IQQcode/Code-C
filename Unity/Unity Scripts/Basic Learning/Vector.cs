//给定力使物体发生位移
using UnityEngine;
using System.Collections;   
public class BNUOthobj : MonoBehaviour {   
    void Update() {  
        GameObject obj1 = GameObject.Find("Cube");//获取'Cube'对象
        obj1.transform.Rotate(1, 0, 0); //旋转物体
    }
}
