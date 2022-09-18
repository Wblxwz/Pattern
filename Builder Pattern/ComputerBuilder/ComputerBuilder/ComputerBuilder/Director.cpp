#include "Director.h"

namespace director
{
	computer::Computer* Director::Create(builder::Builder* builder)
	{
		computer::Computer* computer;
		builder->BuildPinpai()->BuildCpu()->BuildNeicun();
		builder->BuildYingpan()->BuildXianka()->BuildXianshiqi();
		builder->BuildCaozuoxitong()->BuildZhuban();
		builder->BuildShubiao()->BuildJianpan()->BuildYinxiang();
		computer = builder->BuildComputer();
		return computer;
	}
}