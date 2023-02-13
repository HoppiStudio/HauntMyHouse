using Oculus.Interaction.Input;
using System.Collections;
using UnityEngine;

public class ObjectBlockout : MonoBehaviour
{
    [SerializeField] private Vector3[] testVertices = new Vector3[3];

    //3 cube verticies for table creation.
    [SerializeField] private Vector3[] vertexPositions = new Vector3[3];
    private int index = 0;

    [SerializeField] private Material cubeMaterial;

    private void Start()
    {

    }

    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            CreateCubeFromVertices(testVertices);
        }
    }

    private void CreateCubeFromVertices(Vector3[] positions)
    {
        /*Vector3[] vertices = {
            new Vector3 (0, 0, 0),
            new Vector3 (1, 0, 0),
            new Vector3 (1, 1, 0),
            new Vector3 (0, 1, 0),
            new Vector3 (0, 1, 1),
            new Vector3 (1, 1, 1),
            new Vector3 (1, 0, 1),
            new Vector3 (0, 0, 1),
        };*/

        // [bottom front left, bottom back right, top back right]
        Vector3[] vertices = {
            positions[0],                                                // 0 bottom front left
            new Vector3(positions[1].x, positions[0].y, positions[0].z), // 1 bottom front right
            new Vector3(positions[1].x, positions[2].y, positions[0].z), // 2 botton back right
            new Vector3(positions[0].x, positions[2].y, positions[0].z), // 3 bottom back left
            new Vector3(positions[0].x, positions[2].y, positions[1].z), // 4 top front right
            new Vector3(positions[1].x, positions[2].y, positions[1].z),                                               // 5 top back right
            positions[1],                                                // 6 top back left
            new Vector3(positions[0].x, positions[0].y, positions[1].z), // 7 top front left
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

        GameObject cube = new GameObject("cube " + (this.transform.childCount + 1).ToString(), typeof(MeshFilter), typeof(MeshRenderer));
        cube.transform.SetParent(this.transform);

        Mesh mesh = cube.GetComponent<MeshFilter>().mesh;
        mesh.Clear();
        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.Optimize();
        mesh.RecalculateNormals();

        cube.GetComponent<MeshFilter>().mesh = mesh;
        cube.GetComponent<MeshRenderer>().material = cubeMaterial;
    }
}
