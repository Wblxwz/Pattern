#include "IMacBuilder.h"
#include "ComputerBuilder.h"
#include <qstring.h>

namespace imacbuilder
{
	builder::Builder* IMacBuilder::BuildPinpai()
	{
		computer->SetPinpai(map["pinpai"]);
		return this;
	}
	builder::Builder* IMacBuilder::BuildCpu()
	{
		computer->SetCpu(map["CPU"]);
		return this;
	}
	builder::Builder* IMacBuilder::BuildNeicun()
	{
		computer->SetNeicun(map["neicun"]);
		return this;
	}
	builder::Builder* IMacBuilder::BuildYingpan()
	{
		computer->SetYingpan(map["yingpan"]);
		return this;
	}
	builder::Builder* IMacBuilder::BuildCaozuoxitong()
	{
		computer->SetCaozuoxitong(map["caozuoxitong"]);
		return this;
	}
	builder::Builder* IMacBuilder::BuildXianka()
	{
		computer->SetXianka(map["xianka"]);
		return this;
	}
	builder::Builder* IMacBuilder::BuildXianshiqi()
	{
		computer->SetXianshiqi(map["xianshiqi"]);
		return this;
	}
	builder::Builder* IMacBuilder::BuildShubiao()
	{
		computer->SetShubiao(QString("IMac无线键鼠套装"));
		return this;
	}
	builder::Builder* IMacBuilder::BuildJianpan()
	{
		computer->SetJianpan(QString("IMac无线键鼠套装"));
		return this;
	}
	builder::Builder* IMacBuilder::BuildYinxiang()
	{
		computer->SetYinxiang(QString("IMac音箱"));
		return this;
	}
	builder::Builder* IMacBuilder::BuildZhuban()
	{
		computer->SetZhuban(QString("IMac主板"));
		return this;
	}
}