#include <math.h>
#include <immintrin.h>

// Wrap C++ math lib

// Should I align every value to 32-bits?

namespace rMath::Common
{
    static const double R_PI = 3.14159265359;
    static const double R_E = 2.718281828459;

#pragma region Roots

    // Square root
    static double Sqrt(double num)
    {
        return sqrt(num);
    }

    // Cube Root
    static double Cbrt(double num)
    {
        return cbrt(num);
    }
#pragma endregion

    // Power
    static double Pow(double num, double exp)
    {
        return pow(num, exp);
    }

    // Hypotenuse
    static double Hypt(double a, double b)
    {
        return hypot(a, b);
    }

#pragma region Trig Shit
    // ALL IN RADIANS

    static double Sin(double rad)
    {
        return sin(rad);
    }

    static double Cos(double rad)
    {
        return cos(rad);
    }

    static double Tan(double rad)
    {
        return tan(rad);
    }

    static double ArcSin(double rad)
    {
        return asin(rad);
    }

    static double ArcCos(double rad)
    {
        return acos(rad);
    }

    static double ArcTan(double rad)
    {
        return atan(rad);
    }
#pragma endregion

#pragma region Hyperbolic Trig
    // All in Radians

    static double SinH(double rad)
    {
        return sinh(rad);
    }

    static double CosH(double rad)
    {
        return cosh(rad);
    }

    static double TanH(double rad)
    {
        return tanh(rad);
    }

    static double ArcSinH(double rad)
    {
        return asinh(rad);
    }

    static double ArcCosH(double rad)
    {
        return acosh(rad);
    }

    static double ArcTanH(double rad)
    {
        return atanh(rad);
    }
#pragma endregion
}