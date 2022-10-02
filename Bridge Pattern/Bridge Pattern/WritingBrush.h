#pragma once
#include "Pen.h"

class WritingBrush:public Pen
{
public:
	WritingBrush() = default;
	void Print(const int& posx, const int& posy);
	~WritingBrush() = default;
};

