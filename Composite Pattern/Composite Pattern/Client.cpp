#include "Component.h"
#include "Province.h"
#include "City.h"
#include "District.h"

int main(int argc,char *argv[])
{
	Component* p,*c,*d;
	Province pro("ɽ��ʡ");
	City city("������");
	District dis("������");
	p = &pro;
	c = &city;
	d = &dis;
	p->Add(c);
	c->Add(d);
	p->GetName();

	return 0;
}