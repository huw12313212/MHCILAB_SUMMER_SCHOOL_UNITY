using UnityEngine;
using System.Collections;


public class HelloUnity : MonoBehaviour {


	public GameObject cube;
	public Rigidbody cubeBody;

	[Header("Variable")]
	[Range(0,20)]
	public float speed;
	public Color color;
	public float jumpVelocity;

	public void Start()
	{
		cubeBody = cube.GetComponent<Rigidbody> ();
	}

	public GameObject boomPrefab;

	public void Boom(Collider target)
	{
		GameObject o = GameObject.Instantiate (boomPrefab);
		o.transform.position = target.transform.position;

	}

	public void ChangeColor()
	{
		Debug.Log ("Color Changed");
		color = new Color (Random.Range (0, 1.0f), Random.Range (0, 1.0f), Random.Range (0, 1.0f));
	}

	// Update is called once per frame
	void Update () {

		if (Input.GetKeyDown (KeyCode.Space)) {
			
			cubeBody.velocity = new Vector3(0,jumpVelocity,0);
			
		}

		cube.GetComponent<Renderer>().material.color = color;

		if (Input.GetKey (KeyCode.LeftArrow)) 
		{
			Debug.Log("Left Pressed");
			cube.transform.Translate(new Vector3(-speed*Time.deltaTime,0,0));
		}

		if (Input.GetKey(KeyCode.RightArrow)) 
		{
			Debug.Log("Right Pressed");
			cube.transform.Translate(new Vector3(speed*Time.deltaTime,0,0));
		}

		if (Input.GetMouseButtonDown (0)) 
		{
			Debug.Log("Mouse Clicked on:"+ Input.mousePosition);
		}

	}
}
