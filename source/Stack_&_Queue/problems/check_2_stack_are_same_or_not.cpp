#include <bits/stdc++.h>
using namespace std;

/*
    Question: Take two stacks of size N and M as input
    and check if both of them are the same or not.
    Don’t use STL stack to solve this problem.
*/

class MyStack
{
public:
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    MyStack s1, s2;
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s1.push(val);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        s2.push(val);
    }

    if (s1.size() != s2.size())
    {
        cout << "NO" << endl;
        return 0;   
    }
    bool areSame = true;
    while(s1.size() > 0 && s2.size() > 0){
        if(s1.top() != s2.top()){
            areSame = false;
            break; 
        } 
        s1.pop();
        s2.pop();
    }

    if (areSame)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}