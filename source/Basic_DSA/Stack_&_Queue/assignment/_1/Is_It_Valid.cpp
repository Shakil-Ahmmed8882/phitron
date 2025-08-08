#include <bits/stdc++.h>
using namespace std;

bool isValid(const string& s) {
    stack<char> st;
    for (char ch : s) {
        if (!st.empty() && st.top() != ch) {
            st.pop(); 
        } else {
            st.push(ch);
        }
    }
    return st.empty();
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << (isValid(s) ? "YES" : "NO") << "\n";
    }
    return 0;
}
