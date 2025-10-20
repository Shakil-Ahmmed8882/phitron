#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    map<string, int> freq;


    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);
        freq[twoGram]++;
    }

    
    string ans;
    int maxCount = 0;


    for (auto &p : freq) {
        if (p.second > maxCount) {
            maxCount = p.second;
            ans = p.first;
        }
    }

    cout << ans << "\n";

    return 0;
}
