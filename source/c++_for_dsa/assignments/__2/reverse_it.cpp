

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
};

int main()
{

    int t;
    cin >> t;

    Student student[t];

    for (int i = 0; i < t; i++)
    {
        cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].id;
    }






    for (int i = 0, j = t - 1; i < j; i++, j--)
    {

        // i = first index  
        // j = last index  

        /*
             i++ -> -> ❤️ <- <- j--
        */

        swap(student[i].section, student[j].section);
    }


    for (int i = 0; i < t; i++)
    {
        cout << student[i].name << " " << student[i].cls << " " << student[i].section << " " << student[i].id << endl;
    }

    return 0;
}