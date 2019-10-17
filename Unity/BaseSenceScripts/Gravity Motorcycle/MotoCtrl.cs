using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MotoCtrl : MonoBehaviour
{
    public WheelJoint2D right; //motor right wheel
    public WheelJoint2D left;  //motor left wheel

    //摩托车速度
    [SerializeField] float speed = 2200f;
    //摩托车旋转
    [SerializeField] float rotate = 800f;

    Rigidbody2D rg; 

    //声明motor
    JointMotor2D motor;

    // Start is called before the first frame update
    void Start()
    {
        motor.maxMotorTorque = 10000;
        rg = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        //通过键盘来控制摩托车每一帧运行的方向
        motor.motorSpeed = -speed * Input.GetAxis("Vertical");
        right.motor = motor;
        left.motor = motor;

        //deltaTime 避免每一帧调用
        rg.AddTorque( -rotate * Input.GetAxis("Horizontal") * Time.deltaTime);

    } 
}
