#pragma once
#include "Builder.h"
#include "ComputerBuilder.h"
#include "ui_ComputerBuilder.h"

namespace imacbuilder
{
	class IMacBuilder :public builder::Builder
	{
	public:
		IMacBuilder() :com(nullptr) { };
		IMacBuilder(QMap<QString, QString> map) :com(nullptr)
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
		~IMacBuilder() = default;
	private:
		ComputerBuilder* com;
	};
}