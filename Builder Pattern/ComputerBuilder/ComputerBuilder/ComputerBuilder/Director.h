#pragma once
#include "Computer.h"
#include "Builder.h"

namespace director
{
	class Director
	{
	public:
		Director() = default;
		computer::Computer* Create(builder::Builder* builder);
		~Director() = default;
	};
}