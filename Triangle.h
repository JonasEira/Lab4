#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	float base = 0.0f;
	float height = 0.0f;
	Triangle();
	Triangle(float b, float h);
	~Triangle();
};

