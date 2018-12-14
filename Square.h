#pragma once
#include "Shape.h"
#include 
class Square :
	public Shape
	
{
public:
	float width;
	float height;


	App2D::BaseApp::Colour colour;

	Square(float width, float height);

	Square(float width, float height, Vector2D position, App2D::BaseApp::Colour colour);

	void setColour(App2D::BaseApp::Colour colour);

	void setPosition(Vector2D v);
	void update();

	~Square();
};


