#ifndef VECTOR4D_H
#define VECTOR4D_H

struct Vector4D {
	///public variables
	float x, y, z, w;

	///load vector values
	inline void Load(float _x, float _y, float _z, float _w) {
		x = _x;
		y = _y;
		z = _z;
		w = _w;
	}

	///set zero vector
	inline Vector4D(float s = float(0.0)) {
		Load(s,s,s,s);
	}

	///set values to vector
	inline Vector4D(float _x, float _y, float _z, float _w) {
		Load(_x, _y, _z, _w);
	}

	///copy vector
	inline Vector4D(const Vector4D& v) {
		x = v.x;
		y = v.y;
		z = v.z;
		w = v.w;
	}

	///print out vector
	inline void print() {
		printf("%f %f %f %f\n", x, y, z, w);
	}

	////////////////////////////////
	/// Operator overloads below ///
	////////////////////////////////

	///addition overload
	inline const Vector4D& operator + (const Vector4D& v) const {
		return Vector4D(x + v.x, y + v.y, z + v.z, w + v.w);
	}

	///subtraction overload
	inline const Vector4D& operator - (const Vector4D& v) const {
		return Vector4D(x - v.x, y - v.y, z - v.z, w - v.w);
	}

	///+= overload
	inline Vector4D& operator += (const Vector4D& v) {
		x += v.x;
		y += v.y;
		z += v.z;
		w += v.w;
		return *this;
	}

	///-= overload
	inline Vector4D& operator -= (const Vector4D& v) {
		x -= v.x;
		y -= v.y;
		z -= v.z;
		w -= v.w;
		return *this;
	}

	///*= with a scalar overload
	inline Vector4D& operator *= (const float s) {
		x *= s;
		y *= s;
		z *= s;
		w *= s;
		return *this;
	}

	///equals overload
	inline Vector4D& operator = (const Vector4D& v) {
		Load(v.x, v.y, v.z, v.w);
		return *this;
	}

	///multiply a vector with a scalar
	inline const Vector4D& operator * (const float s) const {
		return Vector4D(s*x, s*y, s*z, s*w);
	}

	///divide a vector with a scalar
	inline const Vector4D& operator / (const float s) const {
		float r = 1.0f / s;
		return *this * r;
	}
};

#endif ///end of file