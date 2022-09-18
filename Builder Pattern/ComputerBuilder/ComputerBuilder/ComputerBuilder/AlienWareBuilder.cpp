#include "AlienWareBuilder.h"
#include "ComputerBuilder.h"
#include <qstring.h>

namespace alienwarebuilder
{
	builder::Builder* AlienWareBuilder::BuildPinpai()
	{
		computer->SetPinpai(map["pinpai"]);
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildCpu()
	{
		computer->SetCpu(map["CPU"]);
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildNeicun()
	{
		computer->SetNeicun(map["neicun"]);
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildYingpan()
	{
		computer->SetYingpan(map["yingpan"]);
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildCaozuoxitong()
	{
		computer->SetCaozuoxitong(map["caozuoxitong"]);
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildXianka()
	{
		computer->SetXianka(map["xianka"]);
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildXianshiqi()
	{
		computer->SetXianshiqi(map["xianshiqi"]);
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildShubiao()
	{
		computer->SetShubiao(QString("AlienWare无线键鼠套装"));
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildJianpan()
	{
		computer->SetJianpan(QString("AlienWare无线键鼠套装"));
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildYinxiang()
	{
		computer->SetYinxiang(QString("AlienWare音箱"));
		return this;
	}
	builder::Builder* AlienWareBuilder::BuildZhuban()
	{
		computer->SetZhuban(QString("AlienWare主板"));
		return this;
	}
}