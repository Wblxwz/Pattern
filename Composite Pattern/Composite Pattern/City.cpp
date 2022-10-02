#include "City.h"

City::City(const std::string& name):name(name)
{
}

void City::Add(Component* com)
{
	v.push_back(com);
}

void City::GetName()
{
	std::cout << name << std::endl;
	for (auto i : v)
	{
		i->GetName();
	}
}

void City::Remove(Component* com)
{
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		if (*i == com)
		{
			v.erase(i);
		}
	}
}