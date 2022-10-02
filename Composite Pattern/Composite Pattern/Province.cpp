#include "Province.h"

Province::Province(const std::string& name):name(name)
{
}

void Province::Add(Component* com)
{
	v.push_back(com);
}

void Province::GetName()
{
	std::cout << name << std::endl;
	for (auto i : v)
	{
		i->GetName();
	}
}

void Province::Remove(Component* com)
{
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		if (*i == com)
		{
			v.erase(i);
		}
	}
}