#include "Shape.h"

void Shape::setPosition(Vector2D v)
{
	this->position = Vector2D(v.getX(), v.getY());
}

void Shape::update()
{
}

Shape::Shape()
{
}


Shape::~Shape()
{
}
