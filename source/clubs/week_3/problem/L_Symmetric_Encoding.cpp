#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string b;
        cin >> n >> b;



        

        set<char> lettersSet(b.begin(), b.end());
        vector<char> r(lettersSet.begin(), lettersSet.end()); 
        int L = r.size();

        
        unordered_map<char, char> decodeMap;
        for (int i = 0; i < L; i++) {
            decodeMap[r[L - 1 - i]] = r[i];
        }

        
        string s;
        for (char ch : b)
            s += decodeMap[ch];

        cout << s << "\n";
    }

    return 0;
}
