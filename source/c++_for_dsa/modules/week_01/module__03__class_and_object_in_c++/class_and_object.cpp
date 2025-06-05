
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    // char name[100];
    int role;
    double gpa;

    // Student(int r, int g)
    // {
    //     role = r;
    //     gpa = g;
    // }
};

int main()
{
    // Student a(10, 3.80), b(4, 4.00);
    Student Rahim;
    cin >> Rahim.role >> Rahim.gpa;

    cout << Rahim.role << " " << Rahim.gpa << endl;

    return 0;
}