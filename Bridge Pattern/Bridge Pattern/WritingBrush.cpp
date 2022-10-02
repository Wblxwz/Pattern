#include "WritingBrush.h"

void WritingBrush::Print(const int& posx, const int& posy)
{
	std::cout << "在" << posx << "," << posy << "处用" << color->GetColor() << "的毛笔绘制" << shape->GetShape() << std::endl;
}