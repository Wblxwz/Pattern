#pragma once
#include "Pen.h"

class Pencil:public Pen
{
public:
	Pencil() = default;
	void Print(const int& posx, const int& posy);
	~Pencil() = default;
};

