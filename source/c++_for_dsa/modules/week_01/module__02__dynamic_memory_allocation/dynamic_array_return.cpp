#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int* a = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *x = fun();

    cout << "Main" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << x[i];
    }

    return 0;
}