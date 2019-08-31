using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ShareController : MonoBehaviour
{
    //RigidBody 指针控制球的运动
    private Rigidbody rb;

    public float speed;

    private int count;

    public Text countText;
    
    //初始化 rb
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        count = 0;
        countText.text = "Coins Collected:" + count;
    }

    //通过键盘来控制物体的运动
    //根据渲染时间来变化
    void FixedUpdate()  
    {
        //键盘控制的x轴的变化
        float horiInput = Input.GetAxis("Horizontal");
        //键盘控制的z轴的变化
        float vertiInput = Input.GetAxis("Vertical");

        //给球一个力，让其运动.上下不做变化
        Vector3 movement = new Vector3(horiInput, 0, vertiInput);
        //将力添加到刚体上  
        rb.AddForce(movement * speed);
    }

    //小球碰撞银币
    void OnTriggerEnter(Collider other)
    {
        //碰到银币之后隐藏
        if(other.gameObject.CompareTag("Coin"))
        {
            other.gameObject.SetActive(false);
            count++;
            countText.text = "Coins Collected:" + count;
        }
    }

}
