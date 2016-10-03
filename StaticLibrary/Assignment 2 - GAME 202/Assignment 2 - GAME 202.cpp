// Assignment 2 - GAME 202.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "Vector3D.h"
#include "Vector4D.h"
#include "VMath.h"


int _tmain(int argc, _TCHAR* argv[])
{
	/////////////////////////////////////////////////////
	///Vector3D Tests Below
	////////////////////////////////////////////////////

	Vector3D vec3a = Vector3D(1.0f, 2.0f, 3.0f);
	Vector3D vec3b = vec3a;
	vec3a.print();
	vec3b.print();

	Vector3D vec3c = vec3a + vec3b;
	vec3c.print();

	vec3c = vec3a - vec3b;
	vec3c.print();

	vec3c = Vector3D(1.0f);
	vec3c.print();

	vec3c += vec3a;
	vec3c.print();

	vec3c -= vec3a;
	vec3c.print();

	vec3c *= 2.0f;
	vec3c.print();

	vec3c = vec3c * 1.0f;
	vec3c.print();

	vec3c = vec3c / 2.0f;
	vec3c.print();

	Vector3D normalize = VMath::normalize(Vector3D(1.0f, 2.0f, 3.0f));
	normalize.print();

	Vector3D magnitude = VMath::magnitude(Vector3D(1.0f, 2.0f, 3.0f));
	magnitude.print();

	Vector3D dotProduct = VMath::dotProduct(Vector3D(1.0f, 2.0f, 3.0f), Vector3D(1.0f, 2.0f, 3.0f));
	dotProduct.print();

	Vector3D crossProduct = VMath::crossProduct(Vector3D(1.0f, 2.0f, 3.0f), Vector3D(3.0f, 2.0f, 1.0f));
	crossProduct.print();

	/////////////////////////////////////////////////////
	///Vector4D Tests Below
	////////////////////////////////////////////////////

	Vector4D vec4a = Vector4D(1.0f, 2.0f, 3.0f, 4.0f);
	Vector4D vec4b = Vector4D(4.0f, 3.0f, 2.0f, 1.0f);

	Vector4D vec4c = vec4a - vec4b;
	vec4c.print();

	vec4c = vec4a + vec4b;
	vec4c.print();

	vec4c = Vector4D(1.0f);
	vec4c.print();

	vec4c += vec4c;
	vec4c.print();

	vec4c -= vec4c;
	vec4c.print();

	vec4c *= 2.0f;
	vec4c.print();

	vec4c = vec4c / 2.0f;
	vec4c.print();

	Vector4D normalize4D = VMath::normalize(Vector4D(1.0f, 2.0f, 3.0f, 4.0f));
	normalize4D.print();

	Vector4D magnitude4D = VMath::magnitude(Vector4D(1.0f, 2.0f, 3.0f, 4.0f));
	magnitude4D.print();

	Vector4D dotProduct4D = VMath::dotProduct(Vector3D(1.0f, 2.0f, 3.0f), Vector4D(1.0f, 2.0f, 3.0f, 4.0f));
	dotProduct4D.print();

	return 0;
}

