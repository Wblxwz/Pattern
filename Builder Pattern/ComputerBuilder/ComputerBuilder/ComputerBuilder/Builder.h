#pragma once
#include "Computer.h"
#include <qmap.h>

namespace builder
{
	class Builder
	{
	public:
		Builder() = default;
		Builder(QMap<QString, QString> map) :map(map) {};
		virtual Builder* BuildPinpai() = 0;
		virtual Builder* BuildCpu() = 0;
		virtual Builder* BuildNeicun() = 0;
		virtual Builder* BuildYingpan() = 0;
		virtual Builder* BuildXianka() = 0;
		virtual Builder* BuildXianshiqi() = 0;
		virtual Builder* BuildCaozuoxitong() = 0;
		virtual Builder* BuildShubiao() = 0;
		virtual Builder* BuildJianpan() = 0;
		virtual Builder* BuildYinxiang() = 0;
		virtual Builder* BuildZhuban() = 0;
		computer::Computer* BuildComputer();
		//ȥ��Director�ֱ࣬����Builder����ʵ��Create
		//����Create�����϶�ʱ���ʹ��Director�������ϵ�һԭ��
		//computer::Computer* Create(builder::Builder* builder);
		virtual ~Builder() = default;
	protected:
		computer::Computer* computer = new computer::Computer;
		QMap<QString, QString> map;
	};
}