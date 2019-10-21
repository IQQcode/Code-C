

[TOC]


## 一、Unity3D中几种系统自调用方法
### Awake()

`Awake`用于在游戏开始之前初始化变量或游戏状态。在脚本整个生命周期内它仅被调用一次。`Awake`在所有对象被初始化之后调用，所以你可以安全的与其他对象对话或用诸如`GameObject`。`FindWithTag()`这样的函数搜索它们。每个游戏物体上的`Awake`以随机的顺序被调用。因此，应该用`Awake`来设置脚本间的引用，并用`Start`来传递信息`Awake`总是在`Start`之前被调用。它不能用来执行协同程序。

### Start()

`Start`仅在Update函数第一次被调用前调用。`Start`在`Behaviour`的生命周期中只被调用一次。它和`Awake`的不同是`Start`只在脚本实例被启用时调用。你可以按需调整延迟初始化代码。`Awake`总是在`Start`之前执行。这允许你协调初始化顺序。在所有脚本实例中，`Start`函数总是在`Awake`函数之后调用

### Update() 和 FixedUpdate()

`Update() `和 `FixedUpdate()`在游戏中都会在更新的时候自动循环调用

但是`Update`是在每次渲染新的一帧的时候才会调用，也就是说，这个函数的更新频率和设备的性能有关以及被渲染的物体（可以认为是三角形的数量）。在性能好的机器上可能 fps 30，差的可能小些。这会导致同一个游戏在不同的机器上效果不一致，有的快有的慢

 

`FixedUpdate`，是在固定的时间间隔执行，不受游戏帧率的影响。所以处理`Rigidbody`的时候最好用`FixedUpdate`


`FixUpdate`每一帧都执行，处理`Rigidbody`时，需要用`FixedUpdate`代替`Update`。例如:给刚体加一个作用力时，你必须应用作用力在`FixedUpdate`里的固定帧，而不是Update中的帧。(两者帧长不同)`FixedUpdate`，每固定帧绘制时执行一次，和`Update`不同的是`FixedUpdate`是渲染帧执行，如果你的渲染效率低下的时候`FixedUpdate`调用次数就会跟着下降。`FixedUpdate`比较适用于物理引擎的计算，因为是跟每帧渲染有关。`Update`就比较适合做控制。

## 二、位移与旋转

### 1. 旋转和移动

物体的旋转是通过**Transform.Rotate( )**方法来实现的



- 绕x轴每帧旋转 2°

```csharp
//绕x轴每帧旋转2°
using UnityEngine;
//引入系统包
using System.Collections; 
//声明类
public class BNUTrans : MonoBehaviour {  
    void Update() {  
        //重写Update()
        this.transform.Rotate(2, 0, 0);  //绕x轴每帧旋转2°
    }
}
```



- 游戏对象沿Z轴正方向每一帧移动一个单位

```csharp
using UnityEngine;
using System.Collections;
public class BNUTrans : MonoBehaviour {
    void Update() {
        this.transform.Translate(0, 0, 1);
    }
}
```





- 沿X轴移动一个单位

```csharp
using UnityEngine;
using System.Collections;
public class BNUTrans : MonoBehaviour {
    void Update() {
        //沿X轴移动一个单位
        transform.Translate(1, 0, 0);
        //沿X轴移动一个单位   
        GetComponent<Transform>().Transform(1, 0, 0);   
    }
}
```

> transform 和 Transform 之间大小写的区别 ：transform 是变量，Transform 是类或脚本



- 绕X轴均匀训传

```csharp
using UnityEngine;
using System.Collections;
public class BNUTrans : MonoBehaviour {
    void Update() {
        this.transform.Rotate(10 * Time.daltaTime, 0, 0);
    }
}
```





- 让刚体沿Y轴每秒上升5个单位

```csharp
//引用Unity引擎
using UnityEngine;
//引入系统包    
using System.Collections;
//声明类   
public class BNUTrans : MonoBehaviour {   
    public GameObject gameObject;   //声明游戏对象
    void Update() {
        //重写FixedUpdate()方法
        void FixedUpdate() {    
            //获取刚体坐标位置
            Vector3 te = gameObject.GetComponent<Rigidbody>().transform.position;   
            //缸体沿Y轴每秒上升5个单位
            te.y += 5 * Time.fixedDeltaTime;   
            gameObject.GetComponent<Rigidbody>().transform.position = te;   
        }
    }
}
```

> FixedUpdate( ) 是按固定的物理时间被系统调回执行



### 2. 访问其他游戏对象

- 获取指定游戏对象的脚本属性

```csharp
//引入系统包
using UnityEngine;
//声明类
using System.Collections;   
public class BNUOthobj : MonoBehaviour {
    //游戏对象引用   
    public GameObject otherObject;
    //重写Update()   
    void Update() {
        //获取‘Test’ 脚本组件   
        Test test = objectObject.GetCompnent<Test>();
        //执行doSomething   
        test.doSomething();   
    }
}
```





- 获取指定游戏对象子对象

```csharp
using UnityEngine;
using System.Collections;   
public class BNUOthobj : MonoBehaviour {   
    void Update() {   
        //找到子对象'Cube',使其按X轴旋转
        this.transform.Find("Cube").Rotate(1, 0, 0); 
        //找到父对象，使其按X轴旋转 
        this.transform.parent.Rotate(1, 0, 0);  
    }
}

using UnityEngine;
using System.Collections;   
public class BNUOthobj : MonoBehaviour {   
    void Update() {  
        //获取'Cube'对象
        GameObject obj1 = GameObject.Find("Cube");
        //旋转物体
        obj1.transform.Rotate(1, 0, 0); 
    }
}
```







### 3. 向量

- 给定力使物体发生位移

```csharp
using UnityEngine;
using System.Collections;   
public class BNUOthobj : MonoBehaviour {   
    void Update() {  
        GameObject obj1 = GameObject.Find("Cube");//获取'Cube'对象
        obj1.transform.Rotate(1, 0, 0); //旋转物体
    }
}
```



### 4. 实例化游戏对象

在Unity中，如果想创建很多相同的对象，可以通过实例化对象(`Instantiate`)快速实现，并且实例化出来的对象包含了此对象的所有属性



```csharp
using UnityEngine;
using System.Collections;
public class BNUIns : MonoBehaviour {
    public Transform prefab;
    //重写Awake()
    public void Awake() {
        int i = 0;
        while(i < 5) {
            //实例化对象
            Instantiate(prefab,new Vector3(i * 2.0F, 0, 0), Quaternion.identity);
            i++;
        }
    }
}
```



### 5. 协同和中断

**协同程序**： 

在主程序运行时==同时==开启另一段逻辑处理，来协助当前程序执行。它与多线程不同，所有的协同程序都是在==主线程==中运行，它还是一个==单线程==

- `StartCoroutine()`启动协同程序
- `StopCoroutine()`终止当前(一个)协同程序(MonoBehaviour中)
- `StopAllCoroutine()`终止所有协同程序(MonoBehaviour中)



```csharp
using UnityEngine;
using System.Collections;
public class BNUCoroutine : MonoBehaviour {
    IEnumerator Start() {
        //开启协同程序
        StartCoroutine("DoSomething",2.0F); 
        //等待1s
        yield return new WaitForSeconds(1);
        //中断协同程序
        StopCoroutine("DoSomething");    
    } 
    IEnumerator DoSomething(float someParameter) {
        while(true) {
            print("DoSomething Loop");
            yield return null;
        }
    }
}
```



## 三、重要的类

### MonoBehaviour类

MonoBehaviour类是C#脚本的基类，继承自Behaviour类。在C#脚本中，必须直接或间接继承MonoBehaviour类

> 以为类中部分方法

MonoBehaviour类中常用的可重写方法

|    方法     |                说明                |
| :---------: | :--------------------------------: |
|    Awake    | 当一个脚本实例被载入时该方法被回调 |
|    Start    |    在Update()第一次调用前被调用    |
|   Update    |   脚本启动后，方法在每一帧被屌用   |
| FixedUpdate |  脚本启动后，在固定的时间调用一次  |

MonoBehaviour类中可继承的成员方法

|   成员方法   |             说明             |
| :----------: | :--------------------------: |
| GetComponent | 返回游戏物体上指定名称的组件 |
| Instantiate  |        实例化游戏对象        |



### Transform类

### 

场景中的每一个组件都有一个Transform组件，它就是Transform类实例化的对象，用于操控物体的位置、旋转和缩放

Transform类中常用的的成员方法

| 成员方法  |           说明           |
| :-------: | :----------------------: |
| Transform | 移动游戏对象的方向和距离 |
|  Rotate   |         旋转角度         |

### Rigidbody类

Rigidbody组件可以模拟物体在物理效果下的状态. 例如使物体具有重力，弹力，摩擦力等...



### CharacterController类

角色控制器是CharacterController类实例化的对象，用于第三人称或第一人称游戏角色控制



【参考文章】

- [Unity3D中常用的几种系统自调用的重要方法](https://mp.weixin.qq.com/s?src=3&timestamp=1571664749&ver=1&signature=H5pEW2LrgznmNcU82QZoY4Z7B7ZsVMwLZikGsChfDCo54zBGnosDp-Xl6emDLvleMr6ReyKDIJhpNJtN3b7OeN35Ygppfda6uMCLFInLmlhp1vMZo7HEwf08aazlA9y2wZUCqjUA5nnWlX91WxP67Q==)
- [Update() 和 FixedUpdate()区别](https://blog.csdn.net/cocos2der/article/details/8085080)