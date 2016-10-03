#ifndef VECTOR3D_H
#define VECTOR3D_H

struct Vector3D {
	///public variables
	float x, y, z;

	///load floats into a vector
	inline void Load(float _x, float _y, float _z) {
		x = _x;
		y = _y;
		z = _z;
	}

	///create a zero vector
	inline Vector3D(float s = float(0.0)) {
		Load(s,s,s);
	}

	///create a vector with 3 given values
	inline Vector3D(float _x, float _y, float _z) {
		Load(_x, _y, _z);
	}

	///create a vector by copying another vectors values
	inline Vector3D(const Vector3D& v) {
		Load(v.x, v.y, v.z);
	}

	///print out vector
	inline void print() {
		printf("%f %f %f\n", x, y, z);
	}

	////////////////////////////////
	/// Operator overloads below ///
	////////////////////////////////

	///addition overload
	inline const Vector3D& operator + (const Vector3D& v) const {
		return Vector3D(x + v.x, y + v.y, z + v.z);
	}

	///subtraction overload
	inline const Vector3D& operator - (const Vector3D& v) const {
		return Vector3D(x - v.x, y - v.y, z - v.z);
	}

	///+= overload
	inline Vector3D& operator += (const Vector3D& v) {
		x += v.x;
		y += v.y;
		z += v.z;
		return *this;
	}

	///-= overload
	inline Vector3D& operator -= (const Vector3D& v) {
		x -= v.x;
		y -= v.y;
		z -= v.z;
		return *this;
	}

	///*= with a scalar overload
	inline Vector3D& operator *= (const float s) {
		x *= s;
		y *= s;
		z *= s;
		return *this;
	}

	///equals overload
	inline Vector3D& operator = (const Vector3D& v) {
		Load(v.x, v.y, v.z);
		return *this;
	}

	///multiply a vector with a scalar
	inline const Vector3D& operator * (const float s) const {
		return Vector3D(s*x, s*y, s*z);
	}

	///divide a vector with a scalar
	inline const Vector3D& operator / (const float s) const {
		float r = 1.0f / s;
		return *this * r;
	}
};


#endif ///This last endif is for defining the whole file