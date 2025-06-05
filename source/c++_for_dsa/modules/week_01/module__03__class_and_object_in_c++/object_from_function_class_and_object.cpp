
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

Student fun()
{
    Student Karim(10, 4.10);
    return Karim;
};

int main()
{

    Student KarimObj = fun();

    cout << KarimObj.role << " " << KarimObj.gpa << endl;

    return 0;
}