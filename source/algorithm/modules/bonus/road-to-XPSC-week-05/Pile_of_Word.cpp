#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        if (a.size() != b.size()) {
            cout << "NO\n";
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
