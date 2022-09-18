#pragma once
#include "Phone.h"
#include "Ipad.h"
#include "NoteBookComputer.h"
#include "DesktopComputer.h"

namespace AbstractFactory
{
	class Factory
	{
	public:
		Factory() = default;
		virtual phone::Phone* CreatePhone() = 0;
		virtual ipad::Ipad* CreateIpad() = 0;
		virtual notebook::NoteBookComputer* CreateNoteBookComputer() = 0;
		virtual desktop::DesktopComputer* CreateDesktopComputer() = 0;
		virtual ~Factory() = default;
	};

	class HuaWeiFactory :public Factory
	{
	public:
		phone::Phone* CreatePhone();
		ipad::Ipad* CreateIpad();
		notebook::NoteBookComputer* CreateNoteBookComputer();
		desktop::DesktopComputer* CreateDesktopComputer();
	};

	class XiaoMiFactory :public Factory
	{
	public:
		phone::Phone* CreatePhone();
		ipad::Ipad* CreateIpad();
		notebook::NoteBookComputer* CreateNoteBookComputer();
		desktop::DesktopComputer* CreateDesktopComputer();
	};

	class AppleFactory :public Factory
	{
	public:
		phone::Phone* CreatePhone();
		ipad::Ipad* CreateIpad();
		notebook::NoteBookComputer* CreateNoteBookComputer();
		desktop::DesktopComputer* CreateDesktopComputer();
	};

}