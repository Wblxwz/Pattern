
#include <iostream>
#include "AbstractFactory.h"
#include "HuaWeiDesktopComputer.h"
#include "HuaWeiIpad.h"
#include "HuaWeiNoteBookComputer.h"
#include "HuaWeiPhone.h"
#include "XiaoMiDesktopComputer.h"
#include "XiaoMiIpad.h"
#include "XiaoMiNoteBookComputer.h"
#include "XiaoMiPhone.h"
#include "AppleDesktopComputer.h"
#include "AppleIpad.h"
#include "AppleNoteBookComputer.h"
#include "ApplePhone.h"

namespace AbstractFactory
{
	phone::Phone* HuaWeiFactory::CreatePhone()
	{
		return new huaweiphone::HuaWeiPhone();
	}
	phone::Phone* XiaoMiFactory::CreatePhone()
	{
		return new xiaomiphone::XiaoMiPhone();
	}
	phone::Phone* AppleFactory::CreatePhone()
	{
		return new applephone::ApplePhone();
	}
	ipad::Ipad* HuaWeiFactory::CreateIpad()
	{
		return new huaweiipad::HuaWeiIpad;
	}
	ipad::Ipad* XiaoMiFactory::CreateIpad()
	{
		return new xiaomiipad::XiaoMiIpad;
	}
	ipad::Ipad* AppleFactory::CreateIpad()
	{
		return new appleipad::AppleIpad;
	}
	notebook::NoteBookComputer* HuaWeiFactory::CreateNoteBookComputer()
	{
		return new huaweinotebook::HuaWeiNoteBookComputer;
	}
	notebook::NoteBookComputer* XiaoMiFactory::CreateNoteBookComputer()
	{
		return new xiaominotebook::XiaoMiNoteBookComputer;
	}
	notebook::NoteBookComputer* AppleFactory::CreateNoteBookComputer()
	{
		return new applenotebook::AppleNoteBookComputer;
	}
	desktop::DesktopComputer* HuaWeiFactory::CreateDesktopComputer()
	{
		return new huaweidesktop::HuaWeiDesktopComputer;
	}
	desktop::DesktopComputer* XiaoMiFactory::CreateDesktopComputer()
	{
		return new xiaomidesktop::XiaoMiDesktopComputer;
	}
	desktop::DesktopComputer* AppleFactory::CreateDesktopComputer()
	{
		return new appledesktop::AppleDesktopComputer;
	}
}


int main(int argc, char* argv[])
{
	AbstractFactory::Factory* f = new AbstractFactory::HuaWeiFactory;
	phone::Phone* p = f->CreatePhone();
	p->Create();
	f = new AbstractFactory::XiaoMiFactory;
	notebook::NoteBookComputer* n = f->CreateNoteBookComputer();
	n->Create();
	f = new AbstractFactory::AppleFactory;
	ipad::Ipad* i = f->CreateIpad();
	i->Create();
	f = new AbstractFactory::HuaWeiFactory;
	desktop::DesktopComputer* d = f->CreateDesktopComputer();
	d->Create();
	return 0;
}