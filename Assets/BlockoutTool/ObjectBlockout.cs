using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class ObjectBlockout : MonoBehaviour
{
    [SerializeField] private Material blockoutMaterial;
    [SerializeField] private XRController controller;
    private InputActionManager _inputActionManager;
    private GameObject _blockoutContainer;
    private Stack<GameObject> _blockouts = new();
    private Vector3[] _vertices;
    private Vector3[] _vertexPositions = new Vector3[3];
    private int _vertexIndex;

    private void Start()
    {
        _blockoutContainer = new GameObject("Blockout Container");
    }

    private void OnEnable()
    {
        _inputActionManager = InputActionManager.Instance;

        _inputActionManager.playerInputActions.Player.Blockout.performed += DoBlockout;
        _inputActionManager.playerInputActions.Player.UndoBlockout.performed += UndoBlockout;
    }

    private void OnDisable()
    {
        _inputActionManager.playerInputActions.Player.Blockout.performed -= DoBlockout;
        _inputActionManager.playerInputActions.Player.UndoBlockout.performed -= UndoBlockout;
    }

    private void DoBlockout(InputAction.CallbackContext obj)
    {
        // Set vertex position to position of controller in world space
        _vertexPositions[_vertexIndex] = controller.transform.position;

        _vertexIndex++;

        // If all needed vertices are placed then create blockout object
        if (_vertexIndex == _vertexPositions.Length)
        {
            CreateBlockoutFromVertices(_vertexPositions);
        }
    }
    private void UndoBlockout(InputAction.CallbackContext obj)
    {
        GameObject deletedObject = _blockouts.Pop();
        Destroy(deletedObject);
    }

    private void CreateBlockoutFromVertices(Vector3[] positions)
    {
        Vector3 minVertex = new Vector3(Mathf.Min(positions[0].x, positions[1].x, positions[2].x),
            Mathf.Min(positions[0].y, positions[1].y, positions[2].y),
            Mathf.Min(positions[0].z, positions[1].z, positions[2].z));

        Vector3 maxVertex = new Vector3(Mathf.Max(positions[0].x, positions[1].x, positions[2].x),
            Mathf.Max(positions[0].y, positions[1].y, positions[2].y),
            Mathf.Max(positions[0].z, positions[1].z, positions[2].z));

        _vertices = new Vector3[] {
            new Vector3 (minVertex.x, minVertex.y, minVertex.z),
            new Vector3 (maxVertex.x, minVertex.y, minVertex.z),
            new Vector3 (maxVertex.x, maxVertex.y, minVertex.z),
            new Vector3 (minVertex.x, maxVertex.y, minVertex.z),
            new Vector3 (minVertex.x, maxVertex.y, maxVertex.z),
            new Vector3 (maxVertex.x, maxVertex.y, maxVertex.z),
            new Vector3 (maxVertex.x, minVertex.y, maxVertex.z),
            new Vector3 (minVertex.x, minVertex.y, maxVertex.z),
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

        GameObject blockout = new GameObject("blockout " + (this.transform.childCount + 1).ToString(), typeof(MeshFilter), typeof(MeshRenderer), typeof(MeshCollider));
        blockout.transform.position = transform.position;
        blockout.transform.rotation = transform.rotation;
        blockout.transform.SetParent(_blockoutContainer.transform);
        _blockouts.Push(blockout);

        Mesh mesh = blockout.GetComponent<MeshFilter>().mesh;
        mesh.Clear();
        mesh.vertices = _vertices;
        mesh.triangles = triangles;
        mesh.Optimize();
        mesh.RecalculateNormals();

        // Potentially need to remap material
        blockout.GetComponent<MeshFilter>().mesh = mesh;
        blockout.GetComponent<MeshRenderer>().material = blockoutMaterial;
        blockout.GetComponent<MeshCollider>().sharedMesh = mesh;
        
        _vertexIndex = 0;
    }
}
