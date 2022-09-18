#pragma once
namespace desktop
{
	class DesktopComputer
	{
	public:
		virtual void Create() = 0;
		virtual ~DesktopComputer() = default;
	};
}