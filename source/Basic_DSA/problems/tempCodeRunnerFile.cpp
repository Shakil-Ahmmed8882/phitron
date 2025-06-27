#include <bits/stdc++.h>
using namespace std;

void runningSum(int n, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i] + arr[i + 1];
        cout << sum << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    runningSum(n, arr);
    return 0;
}
