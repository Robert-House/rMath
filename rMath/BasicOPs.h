#include <math.h>

// Wrap C++ math lib

static const float R_PI = 3.14159265359;
static const float R_E = 2.718281828459;

#pragma region Square Root

static float rSqrt(int num)
{
	return sqrt((float)num);
}

static float rSqrt(float num)
{
	return sqrt(num);
}

#pragma endregion

#pragma region Power
static float rPow(int num, int exp)
{
	return pow((float)num, exp);
}

static float rPow(float num, int exp)
{
	return pow(num, exp);
}
#pragma endregion

#pragma region Cube Root
static float rCbrt(int num)
{
	return cbrt((float)num);
}

static float rCbrt(float num)
{
	return cbrt(num);
}
#pragma endregion

#pragma region Hypotenuse
static float rHypt(int a, int b)
{
	return hypot((float)a, (float)b);
}

static float rHypt(float a, float b)
{
	return hypot(a, b);
}
#pragma endregion

#pragma region Trig Shit
// ALL IN RADIANS

static float rSin(float rad)
{
	return sin(rad);
}

static float rCos(float rad)
{
	return cos(rad);
}

static float rTan(float rad)
{
	return tan(rad);
}

static float rArcSin(float rad)
{
	return asin(rad);
}

static float rArcCos(float rad)
{
	return acos(rad);
}

static float rArcTan(float rad)
{
	return atan(rad);
}
#pragma endregion

#pragma region Hyperbolic Trig
// All in Radians

static float rSinH(float rad)
{
	return sinh(rad);
}

static float rCosH(float rad)
{
	return cosh(rad);
}

static float rTanH(float rad)
{
	return tanh(rad);
}

static float rArcSinH(float rad)
{
	return asinh(rad);
}

static float rArcCosH(float rad)
{
	return acosh(rad);
}

static float rArcTanH(float rad)
{
	return atanh(rad);
}
#pragma endregion