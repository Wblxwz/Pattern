#pragma once
#include "Shape.h"

class Rectangle:public Shape
{
public:
	Rectangle() = default;
	std::string GetShape();
	~Rectangle() = default;
private:
	std::string shape = "¾ØÐÎ";
};

