#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> freq;
    for (char c : s) freq[c]++;

    char mid = 0;
    string first_half = "";

    for (auto &p : freq) {
        if (p.second % 2 != 0) {
            if (mid) { // already one odd character
                cout << "NO SOLUTION\n";
                return 0;
            }
            mid = p.first;
        }
        first_half += string(p.second / 2, p.first);
    }

    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    cout << first_half;
    if (mid) cout << mid;
    cout << second_half << "\n";

    return 0;
}
