#pragma once
namespace phone
{
	class Phone
	{
	public:
		Phone() = default;
		virtual void Create() = 0;
		virtual ~Phone() = default;
	};
}
