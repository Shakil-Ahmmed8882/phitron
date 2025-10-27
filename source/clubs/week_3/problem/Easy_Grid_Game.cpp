#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        int A11, A12, A21, A22;
        cin >> A11 >> A12 >> A21 >> A22;

        // The remaining stones after optimal play
        int remaining = min({0, A21, A12, A11});

        cout << remaining << "\n";
    }
    return 0;
}
