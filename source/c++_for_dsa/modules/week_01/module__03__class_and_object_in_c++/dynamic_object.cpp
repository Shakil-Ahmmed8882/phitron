
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    // char name[100];
    int role;
    double gpa;

    Student(int role, int gpa)
    {
        (*this).role = role;
        (*this).gpa = gpa;
    }
};

Student* fun()
{
    Student Karim(10, 4.10);
    Student* p = &Karim; 
    return p;
};

int main()
{

    Student* p = fun();

    cout << p->gpa << " " << p->role << endl;

    return 0;
}