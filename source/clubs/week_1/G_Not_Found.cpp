
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;


    if(s.size() == 1){
        cout << "None\n";
        return 0;
    }
    vector<bool> present(26, false); 

    

    for (char c : s) {
        present[c - 'a'] = true;
    }
    for (auto c : present) {
        cout << c << " "; 
    }

    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            cout << char('a' + i) << "\n";
            return 0;
        }
    }

    // cout << "None\n";
    return 0;
}
