

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

    int l_total_marks = (l.math_marks + l.eng_marks);
    int r_total_marks = (r.math_marks + r.eng_marks);

    if (l_total_marks == r_total_marks)
    {
        return l.id < r.id;
    }

    return l_total_marks > r_total_marks;
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