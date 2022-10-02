#include "Component.h"
#include "Province.h"
#include "City.h"
#include "District.h"

int main(int argc,char *argv[])
{
	Component* p,*c,*d;
	Province pro("山东省");
	City city("济南市");
	District dis("历城区");
	p = &pro;
	c = &city;
	d = &dis;
	p->Add(c);
	c->Add(d);
	p->GetName();

	return 0;
}