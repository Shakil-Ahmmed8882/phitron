

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l;
    // list<int> l(10);
    // list<int> l(10, 8);
    // cout << l.size() << endl;
    // cout << *l.begin() << endl;

    // for(auto it = l.begin(); it !=l.end(); it++){
    //     cout << *it << endl;
    // }

    // list<int> l1 = {10, 20, 30, 40};
    // list<int> l2(l1);
    // int ar[] = {1, 2, 3, 4};
    // list<int> l2(ar, ar + 4);
    vector<int> v= {100, 200, 300, 400};
    list<int> l2(v.begin(), v.end());
    for (int v : l2)
    {
        cout << v << endl;
    }

    return 0;
}