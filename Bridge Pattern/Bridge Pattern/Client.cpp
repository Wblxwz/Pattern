#include "Pencil.h"
#include "WritingBrush.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "RedColor.h"
#include "YellowColor.h"

int main(int argc, char* argv[])
{
	Color* color = new RedColor();
	Shape* shape = new Triangle();
	Pen* pen = new Pencil();
	pen->SetColor(color);
	pen->SetShape(shape);
	pen->Print(50,100);

	return 0;
}