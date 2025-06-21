#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v; // type_1
    // vector<int> v(10); // type_2
    // vector<int> v(10, 7); // type_3
    // vector<int> v2(v);    // type_4 // copied
    // int a[5] = {1,2,3,4,5};
    // vector<int> v2(a, a + 5); // type_5
    vector<int> v = {1, 2, 3}; // type_6

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    // cout << v.size() << endl;
    return 0;
}