#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int ops = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] != T[i]) ops++;
    }

    cout << ops << "\n";
    return 0;
}


