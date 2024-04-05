/* ------------------------------------------------------

 View Frustum - Lighthouse3D

  -----------------------------------------------------*/


#ifndef _FRUSTUMG_
#define _FRUSTUMG_

#ifndef _VEC3_
#include "Vec3.h"
#endif

class Vec3;

#ifndef _PLANE_
#include "Plane.h"
#endif

class Plane;

#ifndef _AABOX_
#include "AABox.h"
#endif

class AABox;




class FrustumG 
{
private:

	enum {
		TOP = 0,
		BOTTOM,
		LEFT,
		RIGHT,
		NEARP,
		FARP
	};


public:

	//enum {OUTSIDE, INTERSECT, INSIDE};
	static const int OUTSIDE = -1;
	static const int INTERSECT = 0;
	static const int INSIDE = 1;

	static Plane pl[6];

	Vec3 ntl,ntr,nbl,nbr,ftl,ftr,fbl,fbr;
	float tang;

	static float nearD, farD, ratio, angle;
	static float nw, nh, fw, fh;

	FrustumG();
	~FrustumG();

	void setCamInternals(float angle, float ratio, float nearD, float farD);
	void setCamDef(Vec3 &p, Vec3 &l, Vec3 &u);
	int pointInFrustum(Vec3 &p);
	int sphereInFrustum(Vec3 &p, float raio);
	int boxInFrustum(AABox &b);
	float boxInFrustumDist(AABox &b);

	/*
	void FrustumG::drawPoints();
	void FrustumG::drawLines();
	void FrustumG::drawPlanes();
	void FrustumG::drawNormals();
	*/
};


#endif