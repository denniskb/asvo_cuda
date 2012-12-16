#ifndef object3d_h

#define object3d_h

#include "bfsoctree.h"
#include "matrix.h"
#include <cutil.h>

/**
 * Encapsulates the raw data representation of a 3D object (the BFSOctree)
 * in a model that is easier to handle. It provides basic transformation.
 */
typedef struct
{
	BFSOctree data;
	Matrix transform;
	CUTBoolean rhsCoordSystem;
} Object3d;

#endif