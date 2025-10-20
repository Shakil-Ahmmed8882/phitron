#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    string result = "";
    for (char c : S) {
        if (c == '<') {

            
            if (!result.empty()) result.pop_back();
        } else {
            result.push_back(c);
        }
    }

    cout << result << "\n";
    return 0;
}
