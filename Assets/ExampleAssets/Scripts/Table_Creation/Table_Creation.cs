using Oculus.Interaction.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
public class Table_Creation : MonoBehaviour
{
    //3 cube verticies for table creation.
    private Vector3 _First_Corner_Coordinates;
    private Vector3 _Secound_Corner_Coordinates;
    private Vector3 _Third_Corner_Coordinates;

    //Tracking taken coordinates
    private bool _Is_1th_corner_taken = false;
    private bool _Is_2nd_corner_taken = false;
    private bool _Is_3rd_corner_taken = false;

    //Is Busy
    private bool _Is_Busy = false;

    private void Start()
    {
        GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        cube.transform.position = new Vector3(0, 0.5f, 0);
    }
    // Update is called once per frame
    void Update()
    {
        if (OVRInput.Get(OVRInput.Button.PrimaryHandTrigger) && _Is_Busy == false)
        {
            if(_Is_1th_corner_taken == false) { _First_Corner_Coordinates = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch); _Is_1th_corner_taken = true; }
            else if (_Is_2nd_corner_taken == false) { _Secound_Corner_Coordinates = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch); _Is_2nd_corner_taken = true; }
            else if (_Is_3rd_corner_taken == false) { _Third_Corner_Coordinates = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch); _Is_3rd_corner_taken = true; }
            _Is_Busy = true;
            StartCoroutine(Release_Busy_State());
        }
        

        if(_Is_3rd_corner_taken == true)
        {
            _Is_3rd_corner_taken = false;
            Create_Cube_With_Three_Coordinates(_First_Corner_Coordinates , _Secound_Corner_Coordinates , _Third_Corner_Coordinates);
        }
    }

    IEnumerator Release_Busy_State()
    {
        yield return new WaitForSeconds(1f);
        _Is_Busy = false;
    }


    private void Create_Cube_With_Three_Coordinates(Vector3 x1, Vector3 x2, Vector3 x3)
    {
        Vector3[] vertices = {
            x1,
            x2,
            x3,
            new Vector3 (0, 1, 0),
            new Vector3 (0, 1, 1),
            new Vector3 (1, 1, 1),
            new Vector3 (1, 0, 1),
            new Vector3 (0, 0, 1),
        };

        int[] triangles = {
            0, 2, 1, //face front
			0, 3, 2,
            2, 3, 4, //face top
			2, 4, 5,
            1, 2, 5, //face right
			1, 5, 6,
            0, 7, 4, //face left
			0, 4, 3,
            5, 4, 7, //face back
			5, 7, 6,
            0, 6, 7, //face bottom
			0, 1, 6
        };

        Mesh mesh = GetComponent<MeshFilter>().mesh;
        mesh.Clear();
        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.Optimize();
        mesh.RecalculateNormals();
    }
}
