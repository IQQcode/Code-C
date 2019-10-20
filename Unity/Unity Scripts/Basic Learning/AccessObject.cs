//获取指定游戏对象的脚本属性
using UnityEngine;
using System.Collections;   //引入系统包
public class BNUOthobj : MonoBehaviour {   //声明类
    public GameObject otherObject;   //游戏对象引用
    void Update() {   //重写Update()
        Test test = objectObject.GetCompnent<Test>();   //获取‘Test’ 脚本组件
        test.doSomething();   //执行doSomething
    }
}


//获取指定游戏对象子对象

using UnityEngine;
using System.Collections;   
public class BNUOthobj : MonoBehaviour {   
    void Update() {   
        this.transform.Find("Cube").Rotate(1, 0, 0);   //找到子对象'Cube',使其按X轴旋转
        this.transform.parent.Rotate(1, 0, 0);   //找到父对象，使其按X轴旋转
    }
}

using UnityEngine;
using System.Collections;   
public class BNUOthobj : MonoBehaviour {   
    void Update() {  
        GameObject obj1 = GameObject.Find("Cube");//获取'Cube'对象
        obj1.transform.Rotate(1, 0, 0); //旋转物体
    }
}
