//#####################################################################
// Copyright 2002, Ronald Fedkiw.
// This file is part of PhysBAM whose distribution is governed by the license contained in the accompanying file PHYSBAM_COPYRIGHT.txt.
//#####################################################################
// Function minmag  
//#####################################################################
//
// finds the minimum value in magnitude and returns it with the sign
//               
//#####################################################################
#ifndef __minmag__
#define __minmag__

namespace PhysBAM{

template<class T>
inline T minmag(const T a,const T b)
{return abs(a)<abs(b)?a:b;}

template<class T>
inline T minmag(const T a,const T b,const T c)
{return minmag(a,minmag(b,c));}

}
#endif

