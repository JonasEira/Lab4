//------------------------------------------------------------------------------
// assignmentapp.cc
// (C) 2015-2017 Individual contributors, see AUTHORS file
//------------------------------------------------------------------------------
#include "config.h"
#include "assignmentapp.h"
#include "Square.h"
#include "Shape.h"
namespace Assignment
{

//------------------------------------------------------------------------------
/**
*/
AssignmentApp::AssignmentApp()
{
	// empty
}

//------------------------------------------------------------------------------
/**
*/
AssignmentApp::~AssignmentApp()
{
	// empty
}

//------------------------------------------------------------------------------
/**
*/
void 
AssignmentApp::Setup()
{
	float w = 0.3f;
	float h = 0.3f;

	float centerX = 0.5f; float centerY = 0.5f; float spacing = 0.3f;
	Square sq = Square(w, h);
	Vector2D pos = Vector2D(centerX - spacing, centerY);
	sq.setPosition(pos);
	shapes.push_back(sq);

}

//------------------------------------------------------------------------------
/**
*/
void
AssignmentApp::Update()
{
	for (Shape s : shapes) {
		s.update();
	}
	//// demo line drawing code
	//LineData line;
	//line.x1 = -0.3f;
	//line.y1 = -0.3f;
	//line.x2 = 0.0f;
	//line.y2 = 0.5f;
	//line.c1.r = 1.0f;
	//AssignmentApp::DrawLine(line);	
	//line.x1 = 0.0f;
	//line.y1 = 0.5f;
	//line.x2 = 0.3f;
	//line.y2 = -0.3f;	
	//AssignmentApp::DrawLine(line);	
	//line.x1 = 0.3f;
	//line.y1 = -0.3f;
	//line.x2 = -0.3f;
	//line.y2 = -0.3f;
	//AssignmentApp::DrawLine(line);	
	//AssignmentApp::PrintText("triangle", 0.5f, 0.5f);
}

} // namespace Assignment
