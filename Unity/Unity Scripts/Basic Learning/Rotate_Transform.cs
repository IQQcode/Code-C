/*
 * 位移与旋转 
 */

//绕x轴每帧旋转2°
using UnityEngine;
using System.Collections; //引入系统包
public class BNUTrans : MonoBehaviour {  //声明类
    void Update() {  //重写Update()
        this.transform.Rotate(2, 0, 0);  //绕x轴每帧旋转2°
    }
}


//游戏对象沿Z轴正方向每一帧移动一个单位
using UnityEngine;
using System.Collections;
public class BNUTrans : MonoBehaviour {
    void Update() {
        this.transform.Translate(0, 0, 1);
    }
}


//沿X轴移动一个单位
using UnityEngine;
using System.Collections;
public class BNUTrans : MonoBehaviour {
    void Update() {
        transform.Translate(1, 0, 0);   //沿X轴移动一个单位
        GetComponent<Transform>().Transform(1, 0, 0);   //沿X轴移动一个单位
    }
}



//绕X轴均匀训传
using UnityEngine;
using System.Collections;
public class BNUTrans : MonoBehaviour {
    void Update() {
        this.transform.Rotate(10 * Time.daltaTime, 0, 0);
    }
}


//让刚体沿Y轴每秒上升5个单位
using UnityEngine;    //引用Unity引擎
using System.Collections;   //引入系统包
public class BNUTrans : MonoBehaviour {   //声明类
    public GameObject gameObject;   //声明游戏对象
    void Update() {
        void FixedUpdate() {    //重写FixedUpdate()方法
            Vector3 te = gameObject.GetComponent<Rigidbody>().transform.position;   //获取刚体坐标位置
            te.y += 5 * Time.fixedDeltaTime;   //缸体沿Y轴每秒上升5个单位
            gameObject.GetComponent<Rigidbody>().transform.position = te;   //设置刚体的位置坐标
        }
    }
}


