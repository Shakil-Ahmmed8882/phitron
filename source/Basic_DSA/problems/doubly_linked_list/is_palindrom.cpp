#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l.push_back(val);
    }

    auto i = l.begin();
    auto j = l.end();
    j--; // Move to the last valid element

    bool isPalindrome = true;

    while (i != j && next(i) != j) // stop when iterators meet or cross
    {
        if (*i != *j)
        {
            isPalindrome = false;
            break;
        }
        ++i;
        --j;
    }

    if (isPalindrome)
        cout << "palindrome";
    else
        cout << "not palindrome";

    return 0;
}
