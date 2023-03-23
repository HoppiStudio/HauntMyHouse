using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class ObjectBlockout : MonoBehaviour
{
    private InputActionManager inputActionManager;

    // vertices
    [SerializeField] private Vector3[] vertexPositions = new Vector3[3];
    private Vector3[] vertices;

    // vertex spheres
    //[SerializeField] private float vertexSphereScale = 0.1f;
    //[SerializeField] private List<GameObject> vertexSpheres = new List<GameObject>();

    [SerializeField] private Material blockoutMaterial;

    [SerializeField] private XRController controller;

    private GameObject blockoutContainer;
    [SerializeField] private Stack<GameObject> blockouts = new Stack<GameObject>();

    private int vertexIndex = 0;

    private void Start()
    {
        blockoutContainer = new GameObject("Blockout Container");
    }

    private void OnEnable()
    {
        inputActionManager = InputActionManager.Instance;

        inputActionManager.playerInputActions.Player.Blockout.performed += DoBlockout;
        inputActionManager.playerInputActions.Player.UndoBlockout.performed += UndoBlockout;
    }

    private void OnDisable()
    {
        inputActionManager.playerInputActions.Player.Blockout.performed -= DoBlockout;
        inputActionManager.playerInputActions.Player.UndoBlockout.performed -= UndoBlockout;
    }

    private void DoBlockout(InputAction.CallbackContext obj)
    {
        // Clear vertex Spheres if necessary
        /*if (vertexIndex == 0 && vertexSpheres.Count == vertexPositions.Length)
        {
            for (int i = 0; i < vertexSpheres.Count; i++)
            {
                Destroy(vertexSpheres[i]);
            }
            vertexSpheres.Clear();
        }*/

        // Set vertex position to position of controller in world space
        vertexPositions[vertexIndex] = controller.transform.position;

        // create sphere at vertex position
        /*(GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.localScale = new Vector3(vertexSphereScale, vertexSphereScale, vertexSphereScale);
        sphere.transform.position = vertexPositions[vertexIndex];
        vertexSpheres.Add(sphere);*/

        vertexIndex++;

        // If all needed vertices are placed then create blockout object
        if (vertexIndex == vertexPositions.Length)
        {
            CreateBlockoutFromVertices(vertexPositions);
            vertexIndex = 0;
        }
    }
    private void UndoBlockout(InputAction.CallbackContext obj)
    {
        GameObject deletedObject = blockouts.Pop();
        Destroy(deletedObject);
    }

    private void CreateBlockoutFromVertices(Vector3[] positions)
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
                        new Vector3(positions[1].x, positions[0].y, positions[0].z),
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
                        new Vector3(positions[1].x, positions[2].y, positions[1].z),
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
                        new Vector3(positions[0].x, positions[0].y, positions[1].z),
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

        GameObject blockout = new GameObject("blockout " + (this.transform.childCount + 1).ToString(), typeof(MeshFilter), typeof(MeshRenderer), typeof(MeshCollider));
        blockout.transform.SetParent(blockoutContainer.transform);
        blockouts.Push(blockout);

        Mesh mesh = blockout.GetComponent<MeshFilter>().mesh;
        mesh.Clear();
        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.Optimize();
        mesh.RecalculateNormals();

        // Potentially need to remap material
        blockout.GetComponent<MeshFilter>().mesh = mesh;
        blockout.GetComponent<MeshRenderer>().material = blockoutMaterial;
        blockout.GetComponent<MeshCollider>().sharedMesh = mesh;
    }
}
