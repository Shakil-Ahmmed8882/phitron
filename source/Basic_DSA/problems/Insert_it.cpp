#include <bits/stdc++.h>
using namespace std;
int main()
{
    // step __ 1
    int n;
    cin >> n;
    vector<int> A_array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A_array[i];
    }

    // step __ 2
    int m;
    cin >> m;
    vector<int> B_array(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B_array[i];
    }

    // step __ 3
    int x;
    cin >> x;

    A_array.insert(A_array.begin() + x, B_array.begin(), B_array.end());
    
    for (int i = 0; i < A_array.size(); i++)
    {
        cout << A_array[i] << " ";
    }

    return 0;
}

// for (int i = 0; i < m; i++)
// {
//     cout << B_array[i] << " ";
// }
// cout << x << endl;
