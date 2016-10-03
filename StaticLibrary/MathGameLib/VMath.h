#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include "Vector3D.h"
#include "Vector4D.h"

class VMath {
public:
	////////////////////////////
	///Vector3D methods below///
	////////////////////////////

	///normalize a vector
	inline static Vector3D normalize(const Vector3D &a){
		float magnitude = (sqrt(a.x * a.x + a.y * a.y + a.z * a.z));
		Vector3D result;

		result.x = a.x / magnitude;
		result.y = a.y / magnitude;
		result.z = a.z / magnitude;

		return result;
	}

	///get maginitude of a vector
	inline static Vector3D magnitude(const Vector3D &a) {
		return float(sqrt(a.x * a.x + a.y * a.y + a.z * a.z));
	}

	///dot product between vector a and b
	inline static float dotProduct(const Vector3D &a, const Vector3D &b) {
		return(a.x * b.x + a.y * b.y + a.z * b.z);
	}

	///cross product between vector a and b
	inline static const Vector3D crossProduct(const Vector3D &a, const Vector3D &b){
		return Vector3D(a.y * b.z - a.z * b.y,
			a.z * b.x - a.x * b.z,
			a.x * b.y - a.y * b.x);
	}

	////////////////////////////
	///Vector4D methods below///
	////////////////////////////

	///calculate magnitude 4d
	inline static Vector4D magnitude(const Vector4D &a) {
		return float(sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w));
	}

	///normalize a vector4d
	inline static Vector4D normalize(const Vector4D &a){
		float magnitude = (sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w));
		Vector4D result;

		result.x = a.x / magnitude;
		result.y = a.y / magnitude;
		result.z = a.z / magnitude;
		result.w = a.w / magnitude;

		return result;
	}

	///dot product between vector3d a and 4d b (1 * b.w is because a 3D vector doesnt have a W value, therefore it is 1)
	inline static float dotProduct(const Vector3D &a, const Vector4D &b) {
		return(a.x * b.x + a.y * b.y + a.z * b.z + 1 * b.w);
	}
};