#include "Square.h"
#include "config.h"
#include "assignmentapp.h"

Square::Square(float width, float height)
{
	this->width = width;
	this->height = height;
}

Square::Square(float width, float height, Vector2D position, App2D::BaseApp::Colour colour)
{
	this->width = width;
	this->height = height;
	this->position = position;
	this->colour = colour;
}

void Square::setColour(App2D::BaseApp::Colour colour) {
	this->colour = colour;
}

void Square::setPosition(Vector2D v)
{
	this->position = Vector2D(v.getX() - this->width/2.0f, v.getY() - this->height/2.0f);
}

void Square::update()
{	
	App2D::BaseApp::LineData l1;
	l1.x1 = position.getX();
	l1.y1 = position.getY();
	l1.x2 = position.getX();
	l1.y2 = position.getY() + height;
	Assignment::AssignmentApp::DrawLine(l1);

	App2D::BaseApp::LineData l2;
	l2.x1 = position.getX();
	l2.y1 = position.getY() + height;
	l2.x2 = position.getX() + width;
	l2.y2 = position.getY() + height;
	Assignment::AssignmentApp::DrawLine(l2);

	App2D::BaseApp::LineData l3;
	l3.x1 = position.getX()+width;
	l3.y1 = position.getY()+height;
	l3.x2 = position.getX()+width;
	l3.y2 = position.getY();
	Assignment::AssignmentApp::DrawLine(l3);

	App2D::BaseApp::LineData l4;
	l4.x1 = position.getX()+width;
	l4.y1 = position.getY();
	l4.x2 = position.getX();
	l4.y2 = position.getY();
	Assignment::AssignmentApp::DrawLine(l4);

}


Square::~Square()
{
}
