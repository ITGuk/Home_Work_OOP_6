#include "Person.h"
Person::Person()
{

}

Person::Person(string name_p, int age_p)
{
	this->name_p = name_p;
	this->age_p = age_p;
}

void Person::SetName_pers(string name_p)
{
	this->name_p = name_p;
}
void Person::SetAge_p(int age_p)
{
	this->age_p = age_p;
}
//Get
string Person::GetName_p()
{
	return name_p;
}
int Person::GetAge_p()
{
	return age_p;
}