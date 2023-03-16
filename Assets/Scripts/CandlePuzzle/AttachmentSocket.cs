using UnityEngine;

namespace CandlePuzzle
{
    public class AttachmentSocket : MonoBehaviour
    {
        [SerializeField] private Mesh attachableMesh;
        [SerializeField] private Material attachableMaterial;
        [SerializeField] private Vector3 gizmoPositionOffset;
        [SerializeField] private Quaternion gizmoRotationOffset;
        [Range(0.01f, 3.0f)] [SerializeField] private float gizmoScalar = 1.0f;
        [SerializeField] private bool useLookRotation;
        [SerializeField] private Color gizmoColour = new(1, 0, 1, 1);

        private GameObject _previewObject;
        private bool _isOccupied;

        private void OnDrawGizmos()
        {
            if (attachableMesh == null)
            {
                return;
            }

            Gizmos.color = gizmoColour;
            var socketBottomPos =
                new Vector3(transform.position.x, GetComponent<Collider>().bounds.min.y, transform.position.z);
            var attachableMeshSize = attachableMesh.bounds.size;
            var socketPos = new Vector3(socketBottomPos.x, socketBottomPos.y + attachableMeshSize.y / 2 * gizmoScalar,
                socketBottomPos.z) + gizmoPositionOffset;
            var gizmoRot = transform.rotation * gizmoRotationOffset;
            gizmoRot.Normalize();
            var gizmoScale = new Vector3(gizmoScalar, gizmoScalar, gizmoScalar);

            if (useLookRotation)
            {
                Gizmos.DrawWireMesh(attachableMesh, socketPos, gizmoRot * Quaternion.LookRotation(Vector3.up), gizmoScale);
                return;
            }

            Gizmos.DrawWireMesh(attachableMesh, socketPos, gizmoRot, gizmoScale);
        }

        private void Start()
        {
            _previewObject = new GameObject("PreviewObject");
            _previewObject.AddComponent<MeshFilter>().mesh = attachableMesh;
            _previewObject.AddComponent<MeshRenderer>().material = attachableMaterial;

            var socketBottomPos =
                new Vector3(transform.position.x, GetComponent<Collider>().bounds.min.y, transform.position.z);
            var attachableMeshSize = attachableMesh.bounds.size;
            var socketPos = new Vector3(socketBottomPos.x, socketBottomPos.y + attachableMeshSize.y / 2 * gizmoScalar,
                socketBottomPos.z) + gizmoPositionOffset;
            var gizmoRot = transform.rotation * gizmoRotationOffset;
            gizmoRot.Normalize();
            var gizmoScale = new Vector3(gizmoScalar, gizmoScalar, gizmoScalar);

            if (useLookRotation)
            {
                _previewObject.transform.SetPositionAndRotation(socketPos, gizmoRot * Quaternion.LookRotation(Vector3.up));
                _previewObject.transform.localScale = gizmoScale;
                _previewObject.transform.SetParent(transform);
                _previewObject.SetActive(false);
                return;
            }

            _previewObject.transform.SetPositionAndRotation(socketPos, gizmoRot);
            _previewObject.transform.localScale = gizmoScale;
            _previewObject.transform.SetParent(transform);
            _previewObject.SetActive(false);
        }

        /*private void OnTriggerStay(Collider other)
    {
        IAttachable attachable = other.GetComponent<IAttachable>();
        if (attachable != null && !_isOccupied)
        {
            _previewObject.SetActive(true);
            /*attachable.MountTo(this);
            _isOccupied = true;#1#
        }
    }*/

        private void OnTriggerEnter(Collider other)
        {
            IAttachable attachable = other.GetComponent<IAttachable>();
            if (attachable != null/* && !_isOccupied*/)
            {
                _previewObject.SetActive(true);
                _previewObject.GetComponent<MeshRenderer>().material.color = Color.green;
                //attachable.MountTo(this);
                //_isOccupied = true;
            }
        }

        private void OnTriggerExit(Collider other)
        {
            _previewObject.SetActive(false);
            _previewObject.GetComponent<MeshRenderer>().material.color = Color.red;
        }
    }
}
