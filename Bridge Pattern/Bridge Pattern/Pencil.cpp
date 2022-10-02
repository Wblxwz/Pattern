#include "Pencil.h"

void Pencil::Print(const int& posx, const int& posy)
{
	std::cout << "在" << posx << "," << posy << "处用" << color->GetColor() << "的铅笔绘制" << shape->GetShape() << std::endl;
}