#include <bits/stdc++.h>
using namespace std;

/*

# Problem: Capital or Small or Digit
# ----------------------------------
# Time Limit: 1 second
# Memory Limit: 256 megabytes

# Description:
# Given a single character X, determine whether it is:
# - A digit
# - An alphabet letter (if so, whether it's capital or small)

# ASCII Info (Reference):
# - Digits: '0' to '9' => ASCII 48 to 57
# - Capital letters: 'A' to 'Z' => ASCII 65 to 90
# - Small letters: 'a' to 'z' => ASCII 97 to 122

# Input:
# - A single character X (either a digit, capital letter, or small letter)

# Output:
# - If X is a digit, print: "IS DIGIT"
# - If X is an alphabet letter:
#     - Print: "ALPHA"
#     - Then on the next line:
#         - "IS CAPITAL" if it's a capital letter
#         - "IS SMALL" if it's a small letter

# Examples:
# Input:
# A
# Output:
# ALPHA
# IS CAPITAL

# Input:
# 9
# Output:
# IS DIGIT

# Input:
# a
# Output:
# ALPHA
# IS SMALL



*/
int main()
{
    char x;
    cin >> x;

    if ((int)x >= 48 && (int)x <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        if ((int)x >= 65 && (int)x <= 90)
        {
            cout << "ALPHA" << endl;
            cout << "IS CAPITAL" << endl;
        }
        if ((int)x >= 97 && (int)x <= 122)
        {
            cout << "ALPHA" << endl;
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
