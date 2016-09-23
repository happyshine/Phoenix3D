// PX2Float1.cpp

#include "PX2MathematicsPre.hpp"
#include "PX2Float1.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
Float1::Float1 ()
{
	mTuple[0] = 0.0f;
}
//----------------------------------------------------------------------------
Float1::~Float1 ()
{
}
//----------------------------------------------------------------------------
Float1::Float1 (float f0)
{
	mTuple[0] = f0;
}
//----------------------------------------------------------------------------
Float1::Float1 (const Float1& tuple)
{
	mTuple[0] = tuple.mTuple[0];
}
//----------------------------------------------------------------------------
Float1& Float1::operator= (const Float1& tuple)
{
	mTuple[0] = tuple.mTuple[0];
	return *this;
}
//----------------------------------------------------------------------------