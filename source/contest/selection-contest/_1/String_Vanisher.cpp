#include <bits/stdc++.h>
using namespace std;

int minOperations(string s)
{
    int ops = 0;
    while (!s.empty())
    {
        string temp;

        for (int i = 0; i < s.size(); ++i)
        {
            if (i % 2 != 0)
                temp += s[i];
        }
        s = temp;
        ++ops;
    }
    return ops;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << minOperations(s) << '\n';
    }
    return 0;
}
