#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int firstMax = INT_MIN, secondMax = INT_MIN;
        int idx1 = -1, idx2 = -1;

        
        for (int i = 0; i < n; i++) {
            if (v[i] > firstMax) {
                firstMax = v[i];
                idx1 = i;
            }
        }

        
        v[idx1] = INT_MIN;

        
        for (int i = 0; i < n; i++) {
            if (v[i] > secondMax) {
                secondMax = v[i];
                idx2 = i;
            }
        }

        
        if (idx1 > idx2) swap(idx1, idx2);

        cout << idx1 << " " << idx2 << endl;
    }

    return 0;
}
