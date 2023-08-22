#include "Teacher.h"
Teacher::Teacher()
{

}

Teacher::Teacher(string name_t, string name_sub)
{
	this->name_t = name_t;
	this->name_sub = name_sub;
}

void Teacher::SetName_t(string name_t)
{
	this->name_t = name_t;
}
void Teacher::SetSubject(string name_sub)
{
	this->name_sub = name_sub;
}


string Teacher::GetName_t()
{
	return name_t;
}
string Teacher::GetSubject()
{
	return name_sub;
}