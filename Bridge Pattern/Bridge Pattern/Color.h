#pragma once
#include <iostream>

class Color
{
public:
	Color() = default;
	virtual std::string GetColor() = 0;
	virtual ~Color() = default;
};

