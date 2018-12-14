#pragma once

#include "Vector2D.h"
#include "Matrix2D.h"

class Shape
{
public:
	Vector2D position;
	Matrix2D rotation;

	virtual void setPosition(Vector2D v);
	virtual void update();

	Shape();
	virtual ~Shape();
};

