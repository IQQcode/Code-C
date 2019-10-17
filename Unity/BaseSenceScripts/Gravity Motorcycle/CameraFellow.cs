using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * 摄像头的视角随着相机的变化而变化
  */
public class CameraFellow : MonoBehaviour
{
    public Transform target;
    Vector3 carmera;

    // Start is called before the first frame update
    void Start()
    {
        carmera = target.position;
        carmera.z = -10;
    }

    // Update is called once per frame
    void Update()
    {
        carmera = target.position;
        carmera.z = -10;
        transform.position = carmera;
    }
}
