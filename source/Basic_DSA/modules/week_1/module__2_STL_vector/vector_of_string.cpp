#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<string> v(n);
    // cin.ignore();
    // for (int i = 0; i < n; i++)
    // {
    //     getline(cin, v[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << endl;
    // }
    vector<int> v = {1, 2, 3, 4};
    // v.resize(2);
    v.pop_back(); 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
 

    return 0;
}