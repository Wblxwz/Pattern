#include "Builder.h"

namespace builder
{
	computer::Computer* Builder::BuildComputer()
	{
		return computer;
	}

	//去掉Director类，直接在Builder类中实现Create
	//但是Create部件较多时最好使用Director，更符合单一原则
	/*computer::Computer* Builder::Create(builder::Builder* builder)
	{
		computer::Computer* computer;
		builder->BuildPinpai()->BuildCpu()->BuildNeicun();
		builder->BuildYingpan()->BuildXianka()->BuildXianshiqi();
		builder->BuildCaozuoxitong()->BuildZhuban();
		builder->BuildShubiao()->BuildJianpan()->BuildYinxiang();
		computer = builder->BuildComputer();
		return computer;
	}*/
}