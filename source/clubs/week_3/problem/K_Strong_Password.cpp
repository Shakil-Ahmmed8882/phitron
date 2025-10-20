#include <bits/stdc++.h>
using namespace std;

// Function to calculate typing time
int typingTime(const string &s) {
    int time = 2; // first character
    for (size_t i = 1; i < s.size(); i++) {
        time += (s[i] == s[i - 1]) ? 1 : 2;
    }
    return time;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string best = "";
        int maxTime = -1;

        // Try inserting each lowercase letter at every position
        for (char c = 'a'; c <= 'z'; c++) {
            for (size_t i = 0; i <= s.size(); i++) {
                string temp = s;
                temp.insert(temp.begin() + i, c);
                int time = typingTime(temp);
                if (time > maxTime) {
                    maxTime = time;
                    best = temp;
                }
            }
        }

        cout << best << "\n";
    }

    return 0;
}
