#ifndef _RMATH_VECTOR3_
#define _RMATH_VECTOR3_

#include <DirectXMath.h>
#include <string>
#include "BasicOps.h"
#include <stdlib.h>

class rVec3
{
private:
	float _x, _y, _z;

public:
	rVec3(float x, float y, float z);
	~rVec3();

	void Init(float x, float y, float z);
	float Magnitude();
	rVec3& Normalize();
	float Dot(rVec3 b);
	float Cross(rVec3 b);
	std::string ToString();

	// Query
	float GetX() { return _x; }
	float GetY() { return _y; }
	float GetZ() { return _z; }

	// Operators
	rVec3& operator+(rVec3 a);
	void operator+=(rVec3 a);
};

//=======================================
//			Constructor
//=======================================
rVec3::rVec3(float x, float y, float z)
{
	Init(x, y, z);
}
rVec3::~rVec3() {}

//=======================================
//			Init(x, y, z)
// Initialization for this object
//=======================================
void rVec3::Init(float x, float y, float z)
{
	_x = x;
	_y = y;
	_z = z;
}

//=======================================
//			+ Operator
// Overload the + operator
//=======================================
rVec3& rVec3::operator+(rVec3 a)
{
	return rVec3((_x + a._x), (_y + a._y), (_z + a._z));
}

//=======================================
//			+= Operator
// Overload the += operator
//=======================================
void rVec3::operator+=(rVec3 a)
{
	_x += a._x;
	_y += a._y;
	_z += a._z;
}

//=======================================
//			Magnitude()
// Returns the magnitude of this vector
//=======================================
float rVec3::Magnitude()
{
	// SQRT(x^2 + y^2 + z^2)
	return rSqrt(rPow(_x, 2) + rPow(_y, 2) + rPow(_z, 2));
}

//=======================================
//			Normalize()
// Returns a Unit Vector
//=======================================
rVec3& rVec3::Normalize()
{
	// Get magnitude of this vector
	float mag = Magnitude();

	// Return Unit Vector
	// a._x / | a | ect....
	return rVec3((_x / mag), (_y / mag), (_z / mag));
}

//=======================================
//			Dot()
// Returns the dot product
//=======================================
float rVec3::Dot(rVec3 b)
{
	// Compute the dot product of two vectors
	float x = _x * b._x;
	float y = _y * b._y;
	float z = _z * b._z;

	return x + y + z;
}

//=======================================
//			Cross
// Returns the cross product
//=======================================
float rVec3::Cross(rVec3 b)
{
	float magA = Magnitude();
	float magB = b.Magnitude();

	throw "Not Implemented";

	return 0;
}

//=======================================
//			ToString
// Convert this Vector to string
//=======================================
std::string rVec3::ToString()
{
	return ("["
		+ std::to_string(_x) + ", "
		+ std::to_string(_y) + ", "
		+ std::to_string(_z) + "]");
}
#endif _RMATH_VECTOR3_