#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string shortName;
    
    shortName += s[0]; 
    
    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] == '-') {
            shortName += s[i + 1]; 
        }
    }
    
    cout << shortName << "\n";
    return 0;
}
