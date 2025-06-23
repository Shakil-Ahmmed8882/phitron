#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> A(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    long long int pre[n];
    pre[1] = A[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + A[i];
    }

    while (q--)
    {
         int l, r;
        cin >> l >> r;
        long long int sum = 0;
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }

        cout << sum << endl;
    }

    return 0;
}
