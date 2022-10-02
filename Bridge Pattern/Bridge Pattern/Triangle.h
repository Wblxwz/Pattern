#pragma once
#include "Shape.h"

class Triangle:public Shape
{
public:
	Triangle() = default;
	std::string GetShape();
	~Triangle() = default;
private:
	std::string shape = "Èý½ÇÐÎ";
};

