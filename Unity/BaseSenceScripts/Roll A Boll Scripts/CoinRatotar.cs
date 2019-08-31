using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinRatotar : MonoBehaviour
{
    public Vector3 rot;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is coins RollBack
    void Update()
    {
        transform.Rotate(rot);
    }
}
