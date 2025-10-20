#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        string result;
        vector<int> lower_idxs, upper_idxs;
        result.reserve(s.size()); 

        for (char ch : s) {
            if (ch == 'b') {
                // if b 
                if (!lower_idxs.empty()) {
                    int idx = lower_idxs.back();
                    lower_idxs.pop_back();
                    result[idx] = '#'; 
                }
            } else if (ch == 'B') {
                // if B
                if (!upper_idxs.empty()) {
                    int idx = upper_idxs.back();
                    upper_idxs.pop_back();
                    result[idx] = '#';
                }
            } else {
                // else .. 
                if (islower(ch)) lower_idxs.push_back(result.size());
                else if (isupper(ch)) upper_idxs.push_back(result.size());
                result.push_back(ch);
            }
        }

        
        for (char c : result)
            if (c != '#') cout << c;
        cout << '\n';
    }

    return 0;
}
