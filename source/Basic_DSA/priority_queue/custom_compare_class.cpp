#include <bits/stdc++.h>
using namespace std;


class Student {
    public: 
    string name; 
    int roll; 
    int marks; 
    Student(string name, int roll, int marks) {
        this->name = name; 
        this->roll = roll; 
        this->marks = marks; 
    }
};

class Cmp{
    public: 
    bool operator()(Student l, Student r){
        return l.marks < r.marks; 
    }
}; 

int main()
{
    priority_queue<Student, vector<Student>, Cmp> pq;

    int n; 
    cin >> n; 
    for(int i = 0; i < n; i++){
        string name; 
        int roll, marks; 
        cin >> name >> roll>> marks; 
        Student obj(name, roll, marks); 
        pq.push(obj); 
    }


    while(!pq.empty()){
        Student obj = pq.top(); 
        pq.pop(); 
        cout << obj.name << " " << obj.roll << " " << obj.marks << endl; 
    }

    return 0;
}