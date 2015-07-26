using UnityEngine;
using System.Collections;
using TouchScript.Gestures;

public class GestureOnBox : MonoBehaviour {

	public PanGesture pan;
	public ScaleGesture scale;

 
	// Use this for initialization
	void Start () {

		Input.multiTouchEnabled = true;

		pan.Panned += (object sender, System.EventArgs e) => 
		{
			this.transform.position += pan.WorldDeltaPosition;
		};


		scale.Scaled += (object sender, System.EventArgs e) => 
		{
			this.transform.localScale *= scale.LocalDeltaScale;
		};
	}
	
	// Update is called once per frame
	void Update () {

	}
}
