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
	std::cout << "Ҷ�ӽڵ㲻֧�ָ÷���" << std::endl;
}

void District::Remove(Component* com)
{
	std::cout << "Ҷ�ӽڵ㲻֧�ָ÷���" << std::endl;
}