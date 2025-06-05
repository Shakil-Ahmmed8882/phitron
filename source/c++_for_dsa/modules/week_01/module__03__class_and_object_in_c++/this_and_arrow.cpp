
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

int main()
{
    // Student a(10, 3.80), b(4, 4.00);
    Student Rahim(20, 5.00);
    

    cout << Rahim.role << " " << Rahim.gpa << endl;

    return 0;
}