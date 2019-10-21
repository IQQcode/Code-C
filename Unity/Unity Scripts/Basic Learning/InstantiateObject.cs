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