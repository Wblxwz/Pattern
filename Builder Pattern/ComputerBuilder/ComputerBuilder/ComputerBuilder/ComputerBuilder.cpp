#include "ComputerBuilder.h"
#include "Builder.h"
#include "Director.h"
#include "IMacBuilder.h"
#include "AlienWareBuilder.h"
#include <qsettings.h>
#include <qmessagebox.h>

void ComputerBuilder::Init()
{
	QSettings* q = new QSettings("./peizhi.ini", QSettings::IniFormat);
	QStringList list;

	//品牌
	QString p1 = q->value("pinpai/AlienWare").toString();
	list << p1;
	p1 = q->value("pinpai/IMac").toString();
	list << p1;
	ui.pinpai->addItems(list);
	list.clear();

	//CPU
	p1 = q->value("CPU/i9").toString();
	list << p1;
	p1 = q->value("CPU/i7").toString();
	list << p1;
	p1 = q->value("CPU/5950").toString();
	list << p1;
	ui.CPU->addItems(list);
	list.clear();

	//内存
	p1 = q->value("neicun/8g").toString();
	list << p1;
	p1 = q->value("neicun/16g").toString();
	list << p1;
	ui.neicun->addItems(list);
	list.clear();

	//硬盘
	p1 = q->value("yingpan/sanxing").toString();
	list << p1;
	p1 = q->value("yingpan/xijie").toString();
	list << p1;
	ui.yingpan->addItems(list);
	list.clear();

	//显卡
	p1 = q->value("xianka/3090").toString();
	list << p1;
	p1 = q->value("xianka/6900").toString();
	list << p1;
	ui.xianka->addItems(list);
	list.clear();

	//显示器
	p1 = q->value("xianshiqi/27").toString();
	list << p1;
	ui.xianshiqi->addItems(list);
	list.clear();

	//操作系统
	p1 = q->value("caozuoxitong/home").toString();
	list << p1;
	p1 = q->value("caozuoxitong/pro").toString();
	list << p1;
	ui.caozuoxitong->addItems(list);
	list.clear();

	delete q;
}

//QMap<QString, QString> ComputerBuilder::GetMap()
//{
//    return map;
//}

ComputerBuilder::ComputerBuilder(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
	//编写时间：2022.9.17
	//编写人员：温布利小王子
	//模块功能：组装、重新来按钮功能实现
	connect(ui.chongxinlai, &QPushButton::clicked, this, [=]() {
		ui.pinpai->setCurrentIndex(0);
		ui.CPU->setCurrentIndex(0);
		ui.neicun->setCurrentIndex(0);
		ui.yingpan->setCurrentIndex(0);
		ui.xianka->setCurrentIndex(0);
		ui.xianshiqi->setCurrentIndex(0);
		ui.caozuoxitong->setCurrentIndex(0);
		});
	connect(ui.zuzhuang, &QPushButton::clicked, this, [=]()
		{
			map["pinpai"] = ui.pinpai->currentText();
			map["CPU"] = ui.CPU->currentText();
			map["neicun"] = ui.neicun->currentText();
			map["yingpan"] = ui.yingpan->currentText();
			map["xianka"] = ui.xianka->currentText();
			map["xianshiqi"] = ui.xianshiqi->currentText();
			map["caozuoxitong"] = ui.caozuoxitong->currentText();
			builder::Builder* builder = nullptr;
			//去掉Director类，直接在Builder类中实现Create
			//但是Create部件较多时最好使用Director，更符合单一原则
			//builder::Builder* builder;
			//computer::Computer* computer = builder->Create(new alienwarebuilder::AlienWareBuilder(map));
			//不符合开闭原则
			//ToDo：反射
			if (map["pinpai"] == QString("外星人"))
			{
				builder = new alienwarebuilder::AlienWareBuilder(map);
			}
			else if (map["pinpai"] == QString("苹果"))
			{
				builder = new imacbuilder::IMacBuilder(map);
			}
			director::Director director;
			computer::Computer* computer = director.Create(builder);
			QMessageBox::information(this, QString("组装成功"), QString("配置清单：\n品牌：%1\n主板：%2\n\
CPU：%3\n内存：%4\n硬盘：%5\n显卡：%6\n显示器：%7\n\
键盘：%8\n鼠标：%9\n音箱：%10\n操作系统：%11").arg(computer->GetPinpai()).arg(computer->GetZhuban()).arg(computer->GetCpu()).arg(computer->GetNeicun()).arg(computer->GetYingpan()).arg(computer->GetXianka()).arg(computer->GetXianshiqi()).arg(computer->GetJianpan()).arg(computer->GetShubiao()).arg(computer->GetYinxiang()).arg(computer->GetCaozuoxitong()), "确认");
			delete computer;
			delete builder;
		});

}

ComputerBuilder::~ComputerBuilder()
{}
