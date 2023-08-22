#include "Student.h"
Student::Student()
{
}

Student::Student(string name_subject,
	int marks_math, int marks_geog, int marks_biol)
{
	this->name_subject = name_subject;
	this->marks_math = marks_math;
	this->marks_geog = marks_geog;
	this->marks_biol = marks_biol;
}

void Student::SetMath(int marks_math)
{
	this->marks_math = marks_math;
}

void Student::SetGeog(int marks_geog)
{
	this->marks_geog = marks_geog;
}

void Student::SetBiol(int marks_biol)
{
	this->marks_biol = marks_biol;
}

int Student::GetMath()
{
	return marks_math;
}

int Student::GetGeog()
{
	return marks_geog;
}

int Student::GetBiol()
{
	return marks_biol;
}