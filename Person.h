#pragma once
#include <iostream>

using namespace std;
class Person
{
private:
	string name_p;
	int age_p;
public:
	Person();
	Person(string name_p, int age_p);
	//Set
	void SetName_pers(string name_p);
	void SetAge_p(int age_p);
	//Get
	string GetName_p();
	int GetAge_p();
};

