/* ------------------------------------------------------

 View Frustum - Lighthouse3D

  -----------------------------------------------------*/

#include "FrustumG.h"
#include "tools.h"
#include <math.h>
using namespace std;

//#include <GL/glut.h>

#define ANG2RAD 3.14159265358979323846/180.0

Plane FrustumG::pl[6];
float FrustumG::nearD = 0.0f;
float FrustumG::farD = 0.0f;
float FrustumG::ratio = 0.0f;
float FrustumG::angle = 0.0f;
float FrustumG::nw = 0.0f;
float FrustumG::nh = 0.0f;
float FrustumG::fw = 0.0f;
float FrustumG::fh = 0.0f;

FrustumG::FrustumG() {}

FrustumG::~FrustumG() {}

void FrustumG::setCamInternals(float angle_in, float ratio_in, float nearD_in, float farD_in) {

	this->ratio = ratio_in;
	this->angle = angle_in;
	this->nearD = nearD_in;
	this->farD = farD_in;

	tang = (float)tan(angle_in * ANG2RAD * 0.5) ;
	nh = nearD_in * tang;
	nw = nh * ratio; 
	fh = farD_in * tang;
	fw = fh * ratio;

	//InfoMessage("setCamInternals: %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf ", angle, ratio, nearD, farD, nh, nw, fh, fw);
}


void FrustumG::setCamDef(Vec3 &p, Vec3 &l, Vec3 &u) {

	Vec3 dir, nc, fc, X, Y, Z;

	Z = p - l;
	Z.normalize();

	X = u * Z;
	X.normalize();

	Y = Z * X;

    //InfoMessage("setCamDef: %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf ", angle, ratio, nearD, farD, nh, nw, fh, fw);

	nc = p - Z * nearD;
	fc = p - Z * farD;

	ntl = nc + Y * nh - X * nw;
	ntr = nc + Y * nh + X * nw;
	nbl = nc - Y * nh - X * nw;
	nbr = nc - Y * nh + X * nw;

	ftl = fc + Y * fh - X * fw;
	ftr = fc + Y * fh + X * fw;
	fbl = fc - Y * fh - X * fw;
	fbr = fc - Y * fh + X * fw;

	pl[TOP].set3Points(ntr, ntl, ftl);
	pl[BOTTOM].set3Points(nbl, nbr, fbr);
	pl[LEFT].set3Points(ntl, nbl, fbl);
	pl[RIGHT].set3Points(nbr, ntr, fbr);
	pl[NEARP].set3Points(ntl, ntr, nbr);
	pl[FARP].set3Points(ftr, ftl, fbl);

	/*
	for (int i = 0; i < 6; i++) {
		InfoMessage("setCamDef (plane): %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf", pl[i].normal.x, pl[i].normal.y,
					pl[i].normal.z, pl[i].point.x, pl[i].point.y, pl[i].point.z);
	}
	*/
}

int FrustumG::pointInFrustum(Vec3 &p) {

	int result = INSIDE;
	for(int i=0; i < 6; i++) {

		if (pl[i].distance(p) < 0)
			return OUTSIDE;
	}
	return(result);

}


int FrustumG::sphereInFrustum(Vec3 &p, float raio) {

	int result = INSIDE;
	float distance;

	for(int i=0; i < 6; i++) {
		distance = pl[i].distance(p);
		if (distance < -raio)
			return OUTSIDE;
		else if (distance < raio)
			result =  INTERSECT;
	}
	return(result);

}


int FrustumG::boxInFrustum(AABox &b) {

	int result = INSIDE;
	for(int i=0; i < 6; i++) {
		//InfoMessage("boxInFrustum (plane): %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf", pl[i].normal.x, pl[i].normal.y, pl[i].normal.z, pl[i].point.x, pl[i].point.y, pl[i].point.z);
		if (pl[i].distance(b.getVertexP(pl[i].normal)) < 0)
			return OUTSIDE;
		else if (pl[i].distance(b.getVertexN(pl[i].normal)) < 0)
			result = INTERSECT;
	}
	return(result);

}


float FrustumG::boxInFrustumDist(AABox &b) {

    int result = INSIDE;
    float minOutsideDist = -1000.0f;
    float minIntersectDist = -1000.0f;
    float outsideDist, intersectDist;
    for(int i=0; i < 6; i++) {
        //InfoMessage("boxInFrustum (plane): %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf", pl[i].normal.x, pl[i].normal.y, pl[i].normal.z, pl[i].point.x, pl[i].point.y, pl[i].point.z);
        outsideDist = pl[i].distance(b.getVertexP(pl[i].normal));
        intersectDist = pl[i].distance(b.getVertexN(pl[i].normal));
        if (outsideDist < 0) {
            if (outsideDist > minOutsideDist)
                minOutsideDist = outsideDist;
            result = OUTSIDE;
        }
        else if (result != OUTSIDE && intersectDist < 0) {
            if (intersectDist > minIntersectDist)
                    minIntersectDist = intersectDist;
            result = INTERSECT;
        }
    }
    if (result == OUTSIDE) {
        //InfoMessage("Outside %.3lf", minOutsideDist);
        return (minOutsideDist);
    }
    else return result;

}


/*
void FrustumG::drawPoints() {


	glBegin(GL_POINTS);

		glVertex3f(ntl.x,ntl.y,ntl.z);
		glVertex3f(ntr.x,ntr.y,ntr.z);
		glVertex3f(nbl.x,nbl.y,nbl.z);
		glVertex3f(nbr.x,nbr.y,nbr.z);

		glVertex3f(ftl.x,ftl.y,ftl.z);
		glVertex3f(ftr.x,ftr.y,ftr.z);
		glVertex3f(fbl.x,fbl.y,fbl.z);
		glVertex3f(fbr.x,fbr.y,fbr.z);

	glEnd();
}


void FrustumG::drawLines() {

	glBegin(GL_LINE_LOOP);
	//near plane
		glVertex3f(ntl.x,ntl.y,ntl.z);
		glVertex3f(ntr.x,ntr.y,ntr.z);
		glVertex3f(nbr.x,nbr.y,nbr.z);
		glVertex3f(nbl.x,nbl.y,nbl.z);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//far plane
		glVertex3f(ftr.x,ftr.y,ftr.z);
		glVertex3f(ftl.x,ftl.y,ftl.z);
		glVertex3f(fbl.x,fbl.y,fbl.z);
		glVertex3f(fbr.x,fbr.y,fbr.z);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//bottom plane
		glVertex3f(nbl.x,nbl.y,nbl.z);
		glVertex3f(nbr.x,nbr.y,nbr.z);
		glVertex3f(fbr.x,fbr.y,fbr.z);
		glVertex3f(fbl.x,fbl.y,fbl.z);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//top plane
		glVertex3f(ntr.x,ntr.y,ntr.z);
		glVertex3f(ntl.x,ntl.y,ntl.z);
		glVertex3f(ftl.x,ftl.y,ftl.z);
		glVertex3f(ftr.x,ftr.y,ftr.z);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//left plane
		glVertex3f(ntl.x,ntl.y,ntl.z);
		glVertex3f(nbl.x,nbl.y,nbl.z);
		glVertex3f(fbl.x,fbl.y,fbl.z);
		glVertex3f(ftl.x,ftl.y,ftl.z);
	glEnd();

	glBegin(GL_LINE_LOOP);
	// right plane
		glVertex3f(nbr.x,nbr.y,nbr.z);
		glVertex3f(ntr.x,ntr.y,ntr.z);
		glVertex3f(ftr.x,ftr.y,ftr.z);
		glVertex3f(fbr.x,fbr.y,fbr.z);

	glEnd();
}


void FrustumG::drawPlanes() {

	glBegin(GL_QUADS);

	//near plane
		glVertex3f(ntl.x,ntl.y,ntl.z);
		glVertex3f(ntr.x,ntr.y,ntr.z);
		glVertex3f(nbr.x,nbr.y,nbr.z);
		glVertex3f(nbl.x,nbl.y,nbl.z);

	//far plane
		glVertex3f(ftr.x,ftr.y,ftr.z);
		glVertex3f(ftl.x,ftl.y,ftl.z);
		glVertex3f(fbl.x,fbl.y,fbl.z);
		glVertex3f(fbr.x,fbr.y,fbr.z);

	//bottom plane
		glVertex3f(nbl.x,nbl.y,nbl.z);
		glVertex3f(nbr.x,nbr.y,nbr.z);
		glVertex3f(fbr.x,fbr.y,fbr.z);
		glVertex3f(fbl.x,fbl.y,fbl.z);

	//top plane
		glVertex3f(ntr.x,ntr.y,ntr.z);
		glVertex3f(ntl.x,ntl.y,ntl.z);
		glVertex3f(ftl.x,ftl.y,ftl.z);
		glVertex3f(ftr.x,ftr.y,ftr.z);

	//left plane

		glVertex3f(ntl.x,ntl.y,ntl.z);
		glVertex3f(nbl.x,nbl.y,nbl.z);
		glVertex3f(fbl.x,fbl.y,fbl.z);
		glVertex3f(ftl.x,ftl.y,ftl.z);

	// right plane
		glVertex3f(nbr.x,nbr.y,nbr.z);
		glVertex3f(ntr.x,ntr.y,ntr.z);
		glVertex3f(ftr.x,ftr.y,ftr.z);
		glVertex3f(fbr.x,fbr.y,fbr.z);

	glEnd();

}

void FrustumG::drawNormals() {

	Vec3 a,b;

	glBegin(GL_LINES);

		// near
		a = (ntr + ntl + nbr + nbl) * 0.25;
		b = a + pl[NEARP].normal;
		glVertex3f(a.x,a.y,a.z);
		glVertex3f(b.x,b.y,b.z);

		// far
		a = (ftr + ftl + fbr + fbl) * 0.25;
		b = a + pl[FARP].normal;
		glVertex3f(a.x,a.y,a.z);
		glVertex3f(b.x,b.y,b.z);

		// left
		a = (ftl + fbl + nbl + ntl) * 0.25;
		b = a + pl[LEFT].normal;
		glVertex3f(a.x,a.y,a.z);
		glVertex3f(b.x,b.y,b.z);
		
		// right
		a = (ftr + nbr + fbr + ntr) * 0.25;
		b = a + pl[RIGHT].normal;
		glVertex3f(a.x,a.y,a.z);
		glVertex3f(b.x,b.y,b.z);
		
		// top
		a = (ftr + ftl + ntr + ntl) * 0.25;
		b = a + pl[TOP].normal;
		glVertex3f(a.x,a.y,a.z);
		glVertex3f(b.x,b.y,b.z);
		
		// bottom
		a = (fbr + fbl + nbr + nbl) * 0.25;
		b = a + pl[BOTTOM].normal;
		glVertex3f(a.x,a.y,a.z);
		glVertex3f(b.x,b.y,b.z);

	glEnd();


}
*/