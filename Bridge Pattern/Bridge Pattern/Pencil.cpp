#include "Pencil.h"

void Pencil::Print(const int& posx, const int& posy)
{
	std::cout << "��" << posx << "," << posy << "����" << color->GetColor() << "��Ǧ�ʻ���" << shape->GetShape() << std::endl;
}