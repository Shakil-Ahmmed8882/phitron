#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int val;
    Person(string name, int val)
    {
        this->name = name;
        this->val = val;
    }
};

bool cmd(Person l, Person r)
{
    if(l.name == r.name){
        return l.val > r.val; 
    }else{
        if(l.name<r.name) 
        return true; 
    else 
        return false; 
    }

    



}

int main()
{

    int t;
    cin >> t;
    vector<Person> v;
    while (t--)
    {
        string name;
        int val;
        cin >> name >> val;
        v.push_back(Person(name, val));
    }

    sort(v.begin(), v.end(), cmd);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].name << " " << v[i].val << endl;
    }

    return 0;
}