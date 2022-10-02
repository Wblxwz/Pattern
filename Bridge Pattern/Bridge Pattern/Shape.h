#pragma once
#include <iostream>

class Shape
{
public:
	Shape() = default;
	virtual std::string GetShape() = 0;
	virtual ~Shape() = default;
};

