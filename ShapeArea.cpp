#include <iostream>
#include "ShapeArea.h"
using namespace std;

float areaCircle( float r)
{
	return (22/7.00 * r * r);
}

float areaRectangle(float l, float w)
{
	return (l*w);
}

float areaSquare( float l)
{
	return (l*l);
}

float periRectangle(float l, float w)
{
	return (2*(l+w));
}

float totalcost(float peri_Rectangle2, float cost)
{
	return peri_Rectangle2*cost;
}
