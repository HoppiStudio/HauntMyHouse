using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(ObjectBlockout))]
public class BlockoutManager : MonoBehaviour
{
    private ObjectBlockout blockoutTool;

    void Start()
    {
        blockoutTool = this.GetComponent<ObjectBlockout>();
    }

    public void EnableBlockout()
    {
        blockoutTool.enabled = true;
    }

    public void DisableBlockout()
    {
        blockoutTool.enabled = false;
    }
}
