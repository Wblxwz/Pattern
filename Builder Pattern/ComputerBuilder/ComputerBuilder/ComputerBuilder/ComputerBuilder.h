#pragma once

#include <QtWidgets/QWidget>
#include "ui_ComputerBuilder.h"

class ComputerBuilder : public QWidget
{
	Q_OBJECT

public:
	ComputerBuilder(QWidget* parent = nullptr);
	~ComputerBuilder();
	void Init();
private:
	Ui::ComputerBuilderClass ui;
	QMap<QString, QString> map;
};
