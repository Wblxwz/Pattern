#include "District.h"

District::District(const std::string& name):name(name)
{
}

void District::GetName()
{
	std::cout << name << std::endl;
}

void District::Add(Component* com)
{
	std::cout << "叶子节点不支持该方法" << std::endl;
}

void District::Remove(Component* com)
{
	std::cout << "叶子节点不支持该方法" << std::endl;
}