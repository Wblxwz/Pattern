#pragma once
#include "Color.h"

class RedColor:public Color
{
public:
	RedColor() = default;
	std::string GetColor();
	~RedColor() = default;
private:
	std::string color = "ºìÉ«";
};

