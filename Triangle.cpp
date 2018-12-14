#include "Triangle.h"

Triangle::Triangle()
{
	base = 0.1f;
	height = 0.1f;
}

Triangle::Triangle(float b, float h)
{
	this->base = b;
	this->height = h;
}


Triangle::~Triangle()
{
}
