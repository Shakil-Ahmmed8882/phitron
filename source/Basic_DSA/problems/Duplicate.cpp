
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isDuplicateFound = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicateFound = true;
                break;
            }
        }
    }

    if (isDuplicateFound)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}