using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoList : MonoBehaviour
{
    [Header("Info List")]
    [TextArea(5,10)]
    [SerializeField] public List<string> infoList;
}
