#include <bits/stdc++.h>
using namespace std;

void runningSum(int n, vector<int> &arr)
{
    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
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
