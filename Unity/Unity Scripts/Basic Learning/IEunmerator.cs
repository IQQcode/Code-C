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
