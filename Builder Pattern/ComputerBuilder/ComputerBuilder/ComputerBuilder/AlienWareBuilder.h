#pragma once
#include "Builder.h"
#include "ComputerBuilder.h"
#include "ui_ComputerBuilder.h"

namespace alienwarebuilder
{
	class AlienWareBuilder :public builder::Builder
	{
	public:
		AlienWareBuilder() :com(nullptr) { }
		AlienWareBuilder(QMap<QString, QString> map) :com(nullptr)
		{
			this->map = map;
		}
		Builder* BuildPinpai();
		Builder* BuildCpu();
		Builder* BuildNeicun();
		Builder* BuildYingpan();
		Builder* BuildXianka();
		Builder* BuildXianshiqi();
		Builder* BuildCaozuoxitong();
		Builder* BuildShubiao();
		Builder* BuildJianpan();
		Builder* BuildYinxiang();
		Builder* BuildZhuban();
		~AlienWareBuilder() = default;
	private:
		ComputerBuilder* com;
	};
}