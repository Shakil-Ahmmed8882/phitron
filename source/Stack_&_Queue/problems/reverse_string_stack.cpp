/*
Kevin’s Stack Problem

Problem Statement:
Kevin has recently learned the concept of “STACK”. During his practice, he got stuck in a problem where he has to reverse a string ‘S’ using a stack. So, he appoints you to help him in reversing the string ‘S’. All you have to do is to find the reversed string.

It is guaranteed that strings will only be composed of English alphabets.

Constraints:
1 <= T <= 10
1 <= |S| <= 10^4

Time limit: 1 sec

Sample Input 1:
2
CODINGNINJAS
WelcomeToCodeStudio  

Sample Output 1:
SAJNINGNIDOC
oidutSedoCoTemocleW

Explanation:
In the first test case, the reverse of the given string is “SAJNINGNIDOC”.
In the second test case, the reverse of the given string is “oidutSedoCoTemocleW”.

Sample Input 2:
3
A
Aa
aA

Sample Output 2:
A
aA
Aa

Explanation:
In each case, the string is reversed using a stack.
*/

#include <bits/stdc++.h> 
using namespace std;

string kevinStackProblem(string &s)
{
    stack<char> st; 
    for (char c : s) {
        st.push(c); 
    }

    string reversed = ""; 
    while (!st.empty()) {
        reversed += st.top(); 
        st.pop(); 
    }

    return reversed; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << kevinStackProblem(s) << endl;
    }
    return 0;
}
