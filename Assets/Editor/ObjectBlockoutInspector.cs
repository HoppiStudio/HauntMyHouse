using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(ObjectBlockout))]
public class ObjectBlockoutInspector : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();
        //DrawButtons();
    }

    private void DrawButtons()
    {
        ObjectBlockout tool = (ObjectBlockout)target;

        if (GUILayout.Button("Create Test Cube"))
        {
            tool.CreateTestObject();
        }
    }
}
