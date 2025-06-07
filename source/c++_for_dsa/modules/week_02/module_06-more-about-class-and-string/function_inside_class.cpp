#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void print () {
        cout << "Hi!! I am " << this->name << " I am " << this->age << " years old" << endl; 
    }
}; 

int
main()
{
    Student Rahim("Rahim", 35); 
    Student Karim("Karim", 28); 

    Rahim.print(); 
    Karim.print(); 


    return 0;
}