#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

void Menu()
{
    int check_menu = NULL;
    int check_add = 1;
    int size_group = 5;
    string temp_name = "";
    string temp_lesson = "";
    int grade_st = NULL;
    int count = NULL;
    int count_teck = NULL;
    bool checking = true;
    Student** studs = new Student * [size_group];
    Teacher** tech = new Teacher * [size_group];
    cout << "Group Students.\n";

    do
    {
        cout << "\t1-Add new student.\
        \n\t2-Add new Teacher.\n\t3-Evaluation table.\
        \n\t4-Show all Teacher.\n\t5-Exit.\n";
        cout << "Enter choise: "; cin >> check_menu;
        switch (check_menu)
        {
        case 1://Add new student.
            while (true)
            {
                Student* student = new Student();
                cout << "Enter name and initials or 'Huk.A.M': ";
                cin >> temp_name;
                student->SetName_pers(temp_name);
                cout << "How you years old?: ";
                cin >> grade_st;
                student->SetAge_p(grade_st);
                cout << "Enter grade or Math: ";
                cin >> grade_st;
                student->SetMath(grade_st);
                cout << "Enter grade or biology: ";
                cin >> grade_st;
                student->SetBiol(grade_st);
                cout << "Enter grade or Geography: ";
                cin >> grade_st;
                student->SetGeog(grade_st);
                studs[count] = student;
                cout << "Add more student?(1-YES/0-NO): ";
                cin >> check_add;
                if (check_add == 1)
                {
                    count++;
                    continue;
                }
                else
                {
                    break;
                }
            }
            break;
        case 2:
        {
            while (true)
            {
                Teacher* teachers = new Teacher();
                cout << "Enter first name: ";
                cin >> temp_name;
                teachers->SetName_t(temp_name);
                cout << "Enter name subject: " << endl;
                cin >> temp_name;
                teachers->SetSubject(temp_name);
                tech[count_teck] = teachers;
                cout << "Add more student?(1-YES/0-NO): ";
                cin >> check_add;
                if (check_add == 1)
                {
                    count_teck++;
                    continue;
                }
                else
                {
                    break;
                }
            };
        }
            break;
        case 3://Show all students and grade.
            for (int i = 0; i < size_group; i++)
            {
                cout << endl << endl;
                cout << "Student: " << studs[i]->GetName_p() << endl;
                cout << "Age: " << studs[i]->GetAge_p() << endl;
                cout << "Grade Math: " << studs[i]->GetMath() << endl;
                cout << "Grade Biology: " << studs[i]->GetBiol() << endl;
                cout << "Grade Geography: " << studs[i]->GetGeog() << endl;
                cout << "Middle score: " << 
                (studs[i]->GetMath() + studs[i]->GetBiol() + studs[i]->GetGeog()) / 3 << endl;
                cout << endl;
            }

            break;
        case 4:
            for (int i = 0; i < size_group; i++)
            {
                cout << endl << endl;
                cout << "Teacher: " << tech[i]->GetName_t() << endl;
                cout << "Subject: " << tech[i]->GetSubject() << endl;
                cout << endl;
            }
            break;
        case 5:
            checking = false;//Exit.
            break;
        default:
            break;
        }
    } while (checking);
}

int main()
{
    Menu();
}