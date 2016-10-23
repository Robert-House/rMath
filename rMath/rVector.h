// Lots of work to do
#include "BasicOps.h"

// Align doubles
#define CACHE_SIZE = 32;
#define ALIGN_DATA __declspec(align(CACHE_SIZE));

using namespace rMath::Common;

class rVector
{
public:
    rVector();
    ~rVector();

    virtual void DotP()          = 0;
    virtual void CrossP()        = 0;
    virtual void Magnitude()     = 0;
    virtual rVector& Normalize() = 0;

    void operator+(rVector &vec);
    void operator-(rVector &vec);
    void operator+=(rVector &vec);
    void operator-=(rVector &vec);

    void operator*();
    void operator*=();

    // outstream overloads

protected:
    ALIGN_DATA double components[4];
};

class rVector2 : public rVector
{
public:
    rVector2();
    ~rVector2();

    virtual void DotP();
    virtual void CrossP();
    virtual void Magnitude();
    virtual rVector& Normalize();

private:
};

class rVector3 : public rVector
{
public:
    rVector3();
    ~rVector3();

    virtual void DotP();
    virtual void CrossP();
    virtual void Magnitude();
    virtual rVector& Normalize();

private:
};

class rVector4 : public rVector
{
public:
    rVector4();
    ~rVector4();

    virtual void DotP();
    virtual void CrossP();
    virtual void Magnitude();
    virtual rVector& Normalize();

private:
};