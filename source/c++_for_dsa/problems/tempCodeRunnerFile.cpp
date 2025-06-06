
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    int b;
    char symbol;
    cin >> a;
    cin >> symbol;
    cin >> b;

    if (symbol == '>')
    {
        if (a > b)
        {
            cout << "Right";
        };
    }

    if (symbol == '<')

    {
        if (!(a < b))
        {
            cout << "Wrong";
        };
    }
    if (symbol == '=')
    {
        if (a == b)
        {
            cout << "Right";
        }
    }

    return 0;
}