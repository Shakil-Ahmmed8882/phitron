#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int lastDigit;

        if (n >= 5) {
            lastDigit = 0;
        } else {
            int fact = 1;
            for (int i = 2; i <= n; i++) fact *= i;
            lastDigit = fact % 10;
        }

        cout << lastDigit << "\n";
    }

    return 0;
}
