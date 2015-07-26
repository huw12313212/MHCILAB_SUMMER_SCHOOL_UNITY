using UnityEngine;
using System.Collections;

public class KillMySelf : MonoBehaviour {

	public float aliveTime;

	// Use this for initialization
	void Start () {
		Invoke ("Kill",aliveTime);
	}
	
	void Kill()
	{
		GameObject.Destroy (this.gameObject);
	}
}
