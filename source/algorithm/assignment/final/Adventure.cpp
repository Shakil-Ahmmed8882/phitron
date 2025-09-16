#include <bits/stdc++.h>
using namespace std;

long long val[10005];
long long weight[10005];
long long dp[1005][10005]; 

long long knapSack(int i, int max_capacity) {
    if (i < 0 || max_capacity <= 0) return 0;

    if (dp[i][max_capacity] != -1) return dp[i][max_capacity];

    if (weight[i] <= max_capacity) {
        // 2 OPTIONS:
        // 1.  BAG A RAKHBO
        // 2. BAG A RAKHBO NA 
        long long opt1 = knapSack(i - 1, max_capacity - weight[i]) + val[i];
        long long opt2 = knapSack(i - 1, max_capacity);
        return dp[i][max_capacity] = max(opt1, opt2);
    } else {
        
        // 2. BAG A RAKHBO NA 
        return dp[i][max_capacity] = knapSack(i - 1, max_capacity);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, mx_weight;
        cin >> n >> mx_weight;

        for (int i = 0; i < n; i++)
            cin >> weight[i];
        for (int i = 0; i < n; i++) 
            cin >> val[i];

        
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= mx_weight; j++)
                dp[i][j] = -1;

        cout << knapSack(n - 1, mx_weight) << endl;
    }

    return 0;
}
