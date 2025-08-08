#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    cin.ignore();

    while (t--) {
        unordered_map<string, int> freq;
        string line;
        getline(cin, line);
        stringstream ss(line);

        string word;
        int max_freq = 0;
        string max_word;

        while (ss >> word) {
            freq[word]++;
            if (freq[word] > max_freq) {
                max_freq = freq[word];
                max_word = word;
            }
        }

        cout << max_word << " " << max_freq << "\n";
    }

    return 0;
}
