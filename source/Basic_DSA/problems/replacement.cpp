#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        {
            continue;
        }
        if (A[i] > 0)
        {
            replace(A.begin(), A.end(), A[i], 1);
        }
        if(A[i] < 0){
            replace(A.begin(), A.end(), A[i], 2);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}