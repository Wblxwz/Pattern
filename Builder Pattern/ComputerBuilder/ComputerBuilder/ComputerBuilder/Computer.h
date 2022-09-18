#pragma once
#include <QString>

namespace computer
{
	class Computer
	{
	public:
		Computer() = default;
		void SetPinpai(const QString& pinpai);
		void SetCpu(const QString& cpu);
		void SetNeicun(const QString& neicun);
		void SetYingpan(const QString& yingpan);
		void SetXianka(const QString& xianka);
		void SetXianshiqi(const QString& xianshiqi);
		void SetCaozuoxitong(const QString& caozuoxitong);
		void SetZhuban(const QString& zhuban);
		void SetShubiao(const QString& shubiao);
		void SetJianpan(const QString& jianpan);
		void SetYinxiang(const QString& yinxiang);
		QString GetPinpai();
		QString GetCpu();
		QString GetNeicun();
		QString GetYingpan();
		QString GetXianka();
		QString GetXianshiqi();
		QString GetCaozuoxitong();
		QString GetZhuban();
		QString GetShubiao();
		QString GetJianpan();
		QString GetYinxiang();
		~Computer() = default;
	private:
		QString pinpai, cpu, neicun, yingpan, xianka, xianshiqi, caozuoxitong, zhuban, shubiao, jianpan, yinxiang;
	};
}