#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 2;

    for (int i = 1; i <= n; i++)
    {
        cout << i << "  " << endl;
        i = i * k; // o(logN) 
    }
    return 0;
}

// o(n)f