#pragma once
#include "Person.h"
class Teacher :
    public Person
{
private:
    string name_t;
    string name_sub;
public:
    Teacher();
    Teacher(string name_t, string name_sub);
    //Set
    void SetName_t(string name_t);
    void SetSubject(string name_sub);
    //Get
    string GetName_t();
    string GetSubject();

};

