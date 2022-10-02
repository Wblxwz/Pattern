#pragma once
#include <iostream>
//���󹹼���
class Component
{
public:
	Component() = default;
	Component(const std::string& name);
	virtual void Add(Component* com) = 0;
	virtual void GetName() = 0;
	virtual void Remove(Component* com) = 0;
	virtual ~Component() = default;
private:
	std::string name;
};

