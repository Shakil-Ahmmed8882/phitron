
#include <bits/stdc++.h>
using namespace std;

// V. Comparison Problem

// 👉 Task:
// Read a comparison between two integers A and B using a symbol S ('<', '>', '=')
// Print "Right" if the comparison is true, otherwise print "Wrong"

// 👉 Input Format:
// One line with three values: A S B
// A and B are integers (-100 to 100)
// S is a char: '<', '>', or '='

// 👉 Output Format:
// Print "Right" if the comparison is correct
// Print "Wrong" if the comparison is false

// 👉 Example 1:
// Input: 5 > 4
// Output: Right

// 👉 Example 2:
// Input: 9 < 1
// Output: Wrong

// 👉 Example 3:
// Input: 4 = 4
// Output: Right

// Now let's write the code to implement this logic...

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
        }
        else
        {
            cout << "Wrong";
        }
    }

    if (symbol == '<')

    {
        if ((a < b))
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    if (symbol == '=')
    {
        if (a == b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }

    return 0;
}