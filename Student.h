#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
	string name_subject;
	int marks_math;
	int marks_geog;
	int marks_biol;
public:
	Student();
	Student(string name_subject,
		int marks_math, int marks_geog, int marks_biol);
	//Set
	void SetMath(int marks_math);
	void SetGeog(int marks_geog);
	void SetBiol(int marks_biol);
	//Get
	int GetMath();
	int GetGeog();
	int GetBiol();
};
