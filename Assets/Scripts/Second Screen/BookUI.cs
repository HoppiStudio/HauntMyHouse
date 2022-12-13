using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BookUI : MonoBehaviour
{
    [Header("Info List")]
    [SerializeField] private InfoList info;

    [Header("Page")]
    [SerializeField] private TMP_Text infoText;
    [SerializeField] private TMP_Text pageNumberText;

    [Header("Page Manager")]
    [Tooltip("Page number will be 0..count-1 but it display in UI 1..count")]
    [SerializeField] private int pageNumber;

    // Start is called before the first frame update
    void Start()
    {
        ChangeToPage(0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void ChangeToPage(int page){
        //If page is in range, fetch info.
        if(page >= 0 && page < info.infoList.Count)
        {
            infoText.text = info.infoList[page];
            pageNumber = page;
            pageNumberText.text = "Page "+ (pageNumber+1).ToString() + "/" + info.infoList.Count.ToString();
            Debug.Log("Change to page " + pageNumber);
        }
        else
        {
            Debug.Log("Page out of range!");
        }
    }

    public void GoToPreviousPage()
    {
        ChangeToPage(pageNumber-1);
    }

    public void GoToNextPage()
    {
        ChangeToPage(pageNumber+1);
    }
}
