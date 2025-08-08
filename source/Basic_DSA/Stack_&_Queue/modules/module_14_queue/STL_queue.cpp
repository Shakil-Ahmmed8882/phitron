#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60);
    // q.push(70);

    // if (!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    // if (!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}