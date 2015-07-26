using UnityEngine;
using System.Collections;
using UnityEngine.Events;

public class CollisionEventTrigger : MonoBehaviour 
{
	public UnityEvent OnCollisionEnterEvent;
	public UnityEvent OnCollisionExitEvent;

	void OnCollisionEnter(Collision collision) 
	{
		Debug.Log ("Collision Enter:"+collision.collider.gameObject.name);

		if (OnCollisionEnterEvent != null)
			OnCollisionEnterEvent.Invoke ();
	}

	void OnCollisionExit(Collision collision) 
	{
		Debug.Log ("Collision Exit:"+collision.collider.gameObject.name);

		if (OnCollisionExitEvent != null)
			OnCollisionExitEvent.Invoke ();
	}
}
