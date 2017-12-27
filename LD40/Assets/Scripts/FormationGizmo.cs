using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FormationGizmo : MonoBehaviour {
	
	void OnDrawGizmos()
	{
		Gizmos.DrawWireSphere(transform.position, 0.2f);
	}

}
