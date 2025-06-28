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
        vector<long long int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        bool is_sorted = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] >> arr[j])
                {
                    is_sorted = false;
                }
            }
        }
        if (is_sorted)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}