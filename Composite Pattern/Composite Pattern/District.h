#pragma once
#include "Component.h"

class District:public Component
{
public:
	District(const std::string& name);
	void GetName();
	void Add(Component* com);
	void Remove(Component* com);
	~District() = default;
private:
	std::string name;
};

