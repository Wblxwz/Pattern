#pragma once
#include <iostream>
#include "Color.h"
#include "Shape.h"

class Pen
{
public:
	Pen() = default;
	virtual void Print(const int& posx,const int& posy) = 0;
	void SetColor(Color *color);
	void SetShape(Shape *shape);
	virtual ~Pen() = default;
protected:
	Color* color;
	Shape* shape;
};

