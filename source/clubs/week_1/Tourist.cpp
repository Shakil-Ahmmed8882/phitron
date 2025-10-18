#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; 

    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;

        int minDis = INT_MAX;


        
        for (int i = 0; i < n; ++i) {
            int X, Y;
            cin >> X >> Y;
            int dis = abs(X - a) + abs(Y - b);
            minDis = min(minDis, dis);
        }

        cout << minDis << "\n";
    }

    return 0;
}
