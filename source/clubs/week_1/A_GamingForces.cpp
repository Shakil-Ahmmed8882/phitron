#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;                     
    if (!(cin >> t)) return 0; 

    while (t--) {
        int n;                 
        cin >> n;

        
        vector<ll> health(n);
        for (int i = 0; i < n; ++i) {
            cin >> health[i];  
        }

        
        sort(health.begin(), health.end());

        
        
        vector<ll> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + health[i];
        }

        
        ll minOps = LLONG_MAX;

        
        
        for (int m = 0; m <= n; ++m) {
            ll sumOfM = prefixSum[m];             
            ll maxOfM = (m == 0 ? 0 : health[m - 1]); 

            ll needDoubleHits = max(maxOfM, (sumOfM + 1) / 2);            
            ll killSpellsForRest = n - m;


            
            
            ll totalOps = needDoubleHits + killSpellsForRest;

            
            if (totalOps < minOps) minOps = totalOps;
        }

        
        cout << minOps << '\n';
    }

    return 0;
}
