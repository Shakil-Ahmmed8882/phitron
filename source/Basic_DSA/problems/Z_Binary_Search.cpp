#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> A(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }


    sort(A.begin() + 1, A.end()); 

    while (q--)
    {
        int value;
        cin >> value;

        int l = 1, r = n;
        bool found = false;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (A[mid] == value)
            {
                found = true;
                break;
            }
            else if (A[mid] > value)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (found)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}