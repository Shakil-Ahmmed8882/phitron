#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool is_palindrome = true;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}