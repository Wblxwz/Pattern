#pragma once
#include "Component.h"
#include <vector>

class City:public Component
{
public:
	City() = default;
	City(const std::string& name);
	void Add(Component* com);
	void GetName();
	void Remove(Component* com);
	~City() = default;
private:
	std::string name;
	std::vector<Component*> v;
};

