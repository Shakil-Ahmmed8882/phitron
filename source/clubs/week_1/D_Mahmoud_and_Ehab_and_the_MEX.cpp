#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    
    vector<int> present(101, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        present[a] = 1;
    }

    int operations = 0;

    for (int i = 0; i < x; i++) {
        if (!present[i]) operations++;
    }

    if (present[x]) operations++;

    cout << operations << "\n";
    return 0;
}



