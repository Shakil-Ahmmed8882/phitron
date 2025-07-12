

#include <bits/stdc++.h>
using namespace std;

void check_are_they_same(list<int> l1, list<int> l2)
{
    if (l1.size() != l2.size())
    {
        cout << "not same";
        return;
    }

    auto it1 = l1.begin();
    auto it2 = l2.begin();

    while (it1 != l1.end())
    {

        if (*it1 != *it2)
        {
            cout << "not same";
            return;
        }

        ++it1;
        ++it2;
    }

    cout << "same";

    
}

int main()
{
    list<int> l1;
    list<int> l2;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        l1.push_back(v);
    }

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        l2.push_back(v);
    }

    check_are_they_same(l1, l2);
    return 0;
}