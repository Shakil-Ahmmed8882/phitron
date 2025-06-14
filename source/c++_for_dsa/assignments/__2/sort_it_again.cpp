

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
    int math_marks;
    int eng_marks;
};

bool compare(Student l, Student r)
{

    
    if (l.eng_marks > r.eng_marks) return true; 

    if (l.eng_marks == r.eng_marks) {
        if(l.math_marks > r.math_marks){
            return true; 
        }else{
            return l.id < r.id;
        }
    }; 
    
    
    return false; 



    
}

int main()
{

    int t;
    cin >> t;

    Student student[t];

    for (int i = 0; i < t; i++)
    {
        cin >> student[i].name >> student[i].cls >>
            student[i].section >> student[i].id >>
            student[i].math_marks >> student[i].eng_marks;
    }

    sort(student, student + t, compare);

    for (int i = 0; i < t; i++)
    {
        cout << student[i].name << " " << student[i].cls
             << " " << student[i].section << " " << student[i].id << " "
             << student[i].math_marks << " " << student[i].eng_marks << endl;
    }

    return 0;
}