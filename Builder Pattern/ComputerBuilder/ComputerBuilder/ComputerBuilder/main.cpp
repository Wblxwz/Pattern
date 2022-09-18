#include "ComputerBuilder.h"
#include <QtWidgets/QApplication>


int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	ComputerBuilder w;
	w.setFixedSize(600, 263);
	w.setWindowTitle(QString("电脑组装"));
	w.show();
	return a.exec();
}
