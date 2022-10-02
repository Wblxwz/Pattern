#pragma once
#include "Component.h"
#include <vector>

class Province:public Component
{
public:
	Province() = default;
	Province(const std::string& name);
	void Add(Component* com);
	void GetName();
	void Remove(Component* com);
	~Province() = default;
private:
	std::string name;
	std::vector<Component*> v;
};

