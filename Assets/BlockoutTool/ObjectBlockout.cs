using Oculus.Interaction.Input;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class ObjectBlockout : MonoBehaviour
{
    //3 cube verticies for table creation.
    //[SerializeField] private Vector3[] testVertexPositions = new Vector3[3];
    [SerializeField] private Vector3[] vertexPositions = new Vector3[3];
    private Vector3[] vertices;

    [SerializeField] private Material cubeMaterial;

    [SerializeField] private XRController controller;

    private int index = 0;

    private InputActionControls inputActions;

    private void Awake()
    {
        inputActions = new InputActionControls();

        inputActions.Player.Blockout.Enable();
        inputActions.Player.Blockout.performed += DoBlockOut;
    }

    private void DoBlockOut(InputAction.CallbackContext obj)
    {
        vertexPositions[index] = controller.transform.position;
        index++;

        if (index == vertexPositions.Length)
        {
            CreateCubeFromVertices(vertexPositions);
            index = 0;
        }
    }

    private void CreateCubeFromVertices(Vector3[] positions)
    {
        /*Vector3[] vertices = {
            new Vector3 (0, 0, 0), // 0 bottom front left
            new Vector3 (1, 0, 0), // 1 bottom front right
            new Vector3 (1, 1, 0), // 2 top front right
            new Vector3 (0, 1, 0), // 3 top front left
            new Vector3 (0, 1, 1), // 4 top back left
            new Vector3 (1, 1, 1), // 5 top back right
            new Vector3 (1, 0, 1), // 6 bottom back right
            new Vector3 (0, 0, 1), // 7 bottom back left
        };*/
        
        // left to right
        if(positions[0].x < positions[1].x)
        {
            // front to back
            if (positions[0].z < positions[1].z)
            {
                // bottom to top
                if (positions[2].y > positions[0].y)
                {
                    vertices = new Vector3[] {
                        positions[0],
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                        new Vector3(positions[0].x, positions[2].y, positions[0].z),
                        new Vector3(positions[0].x, positions[2].y, positions[1].z),
                        new Vector3(positions[1].x, positions[2].y, positions[1].z),
                        positions[1],
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
                    };
                }
                // top to bottom
                else
                {
                    vertices = new Vector3[] {
                        new Vector3(positions[0].x, positions[2].y, positions[0].z),
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
                        positions[0],
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
                        positions[1],
                        new Vector3(positions[1].x, positions[2].y, positions[1].z),
                        new Vector3(positions[0].x, positions[2].y, positions[1].z),
                    };
                }
            }
            // back to front
            else
            {
                // bottom to top
                if (positions[2].y > positions[0].y)
                {
                    vertices = new Vector3[] {
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
                        positions[1],
                        new Vector3(positions[1].x, positions[2].y, positions[1].z),
                        new Vector3(positions[0].x, positions[2].y, positions[1].z),
                        new Vector3(positions[0].x, positions[2].y, positions[0].z),
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
                        positions[0]
                    };
                }
                // top to bottom
                else
                {
                    vertices = new Vector3[] {
                        new Vector3(positions[0].x, positions[2].y, positions[1].z),
                        new Vector3(positions[1].x, positions[2].y, positions[1].z),
                        positions[1],
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
                        positions[0],
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                        new Vector3(positions[0].x, positions[2].y, positions[0].z),
                    };
                }
            }
        }
        // right to left
        else
        {
            // front to back
            if (positions[0].z < positions[1].z)
            {
                // bottom to top
                if (positions[2].y > positions[0].y)
                {
                    vertices = new Vector3[] {
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
                        positions[0],
                        new Vector3(positions[0].x, positions[2].y, positions[0].z),
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                        new Vector3(positions[1].x, positions[2].y, positions[1].z),
                        new Vector3(positions[0].x, positions[2].y, positions[1].z),
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
                        positions[1]
                    };
                }
                // top to bottom
                else
                {
                    vertices = new Vector3[] {
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                        new Vector3(positions[0].x, positions[2].y, positions[0].z),
                        positions[0],
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
                        positions[1],
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
                        new Vector3(positions[0].x, positions[2].y, positions[1].z),
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                    };
                }
            }
            // back to front
            else
            {
                // bottom to top
                if (positions[2].y > positions[0].y)
                {
                    vertices = new Vector3[] {
                        positions[1],
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
                        new Vector3(positions[0].x, positions[2].y, positions[1].z),
                        new Vector3(positions[1].x, positions[2].y, positions[1].z),
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                        new Vector3(positions[0].x, positions[2].y, positions[0].z),
                        positions[0],
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
                    };
                }
                // top to bottom
                else
                {
                    vertices = new Vector3[] {
                        new Vector3(positions[1].x, positions[2].y, positions[1].z),
                        new Vector3(positions[0].x, positions[2].y, positions[1].z),
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
                        positions[1],
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
                        positions[0],
                        new Vector3(positions[0].x, positions[2].y, positions[0].z),
                        new Vector3(positions[1].x, positions[2].y, positions[0].z),
                    };
                }
            }
        }

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

    private void OnDestroy()
    {
        inputActions.Player.Blockout.Disable();
        inputActions.Player.Blockout.performed -= DoBlockOut;
    }
}
