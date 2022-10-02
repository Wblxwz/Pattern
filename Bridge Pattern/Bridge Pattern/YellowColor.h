#pragma once
#include "Color.h"

class YellowColor:public Color
{
public:
	YellowColor() = default;
	std::string GetColor();
	~YellowColor() = default;
private:
	std::string color = "»ÆÉ«";
};

