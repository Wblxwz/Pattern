#include "WritingBrush.h"

void WritingBrush::Print(const int& posx, const int& posy)
{
	std::cout << "��" << posx << "," << posy << "����" << color->GetColor() << "��ë�ʻ���" << shape->GetShape() << std::endl;
}