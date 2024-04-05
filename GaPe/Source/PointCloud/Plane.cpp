// Plane.cpp
//
//////////////////////////////////////////////////////////////////////

#include "Plane.h"
#include <stdio.h>
using namespace std;


Plane::Plane( Vec3 &v1,  Vec3 &v2,  Vec3 &v3) {

	set3Points(v1,v2,v3);
}


Plane::Plane() {}

Plane::~Plane() {}


void Plane::set3Points( Vec3 &v1,  Vec3 &v2,  Vec3 &v3) {


	Vec3 aux1, aux2;

	aux1 = v1 - v2;
	aux2 = v3 - v2;

	normal = aux2 * aux1;

	normal.normalize();
	point.copy(v2);
	d = -(normal.innerProduct(point));
}

void Plane::setNormalAndPoint(Vec3 &normal_in, Vec3 &point_in) {

	this->normal.copy(normal_in);
	this->normal.normalize();
	d = -(this->normal.innerProduct(point_in));
}

void Plane::setCoefficients(float a_in, float b_in, float c_in, float d_in) {

	// set the normal vector
	normal.set(a_in,b_in,c_in);
	//compute the lenght of the vector
	float l = normal.length();
	// normalize the vector
	normal.set(a_in /l,b_in /l,c_in /l);
	// and divide d by th length as well
	this->d = d_in /l;
}


	

float Plane::distance(const Vec3 &p) {

	return (d + normal.innerProduct(p));
}

void Plane::print() {

	printf("Plane(");normal.print();printf("# %f)",d);
}
