using OculusSampleFramework;
using UnityEngine;

namespace CandlePuzzle
{
    public class TestAttachable : MonoBehaviour, IAttachable
    {
        public void MountTo(AttachmentSocket socket)
        {
            transform.position = socket.transform.position;
            transform.rotation = transform.rotation;
            GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
            Destroy(GetComponent<DistanceGrabbable>());
            transform.SetParent(socket.transform);
        }
    }
}
