#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l;
    // cout << l.max_size() << endl;

    vector<int> v = {100, 200, 300, 400};
    list<int> l1 = {1, 2, 3, 4};
    list<int> l2(v.begin(), v.end());

    // l2.clear();
    // if(l2.empty()){
    //     cout << "empty" << endl;
    // }
    // l2.resize(8, 77);
    // list <int> l3 = l2;
    // l2.assign(l1.begin(), l1.end());
    // l1.push_back(55);
    // l1.push_front(8);
    // l1.pop_back(); 
    // l1.pop_front();

    // cout << *next(l1.begin(), 3) << endl;
    // l1.insert(next(l1.begin(), 1), 59);
    l1.insert(next(l1.begin(), 3), v.begin(), v.end());
    for (int v : l1)
    {
        cout << v << endl;
    }
    return 0;
}