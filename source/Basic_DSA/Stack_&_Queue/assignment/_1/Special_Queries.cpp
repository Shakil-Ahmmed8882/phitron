#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    cin.ignore();
    queue<string> myQ;
    while (q--)
    {
        string input;
        getline(cin, input);

        if (input.rfind("0 ", 0) == 0)
        {
            string name = input.substr(2);
            myQ.push(name);
        }
        else
        {
            if (!myQ.empty())
            {
                cout << myQ.front() << endl;
                myQ.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}