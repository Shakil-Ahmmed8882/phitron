#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        int mn = arr[0];
        int mx = arr[n - 1];

        if (mn % 2 == mx % 2)
            cout << 0 << endl;
        else
        {

            int i = 0, count_1 = 0;
            int j = n - 1, count_2 = 0;

            while (arr[i] % 2 != mx % 2)
            {
                i++;
                count_1++;
            }

            while (arr[j] % 2 != mn % 2)
            {
                j--;
                count_2++;
            }

            cout << min(count_1, count_2) << endl;
        }
    }

    return 0;
}