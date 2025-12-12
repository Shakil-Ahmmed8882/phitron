#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define nl cout << "\n"

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int N;
    ll C; // C can be up to 10000, use ll for safety, though int is sufficient.
    
    // Read N and C
    if (!(cin >> N >> C)) return;

    // Read Array A
    vector<ll> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // Read Binary String S
    string S;
    cin >> S;

    ll normal_profit = 0; // P_Normal: Profit from all non-special missions
    ll special_missions_value = 0; // Sum of rewards from special missions

    // --- 1. Calculate the necessary sums ---
    for (int i = 0; i < N; ++i) {
        if (S[i] == '0') {
            normal_profit += A[i];
        } else {
            special_missions_value += A[i];
        }
    }

    // --- 2. Check the feasibility constraint ---
    if (normal_profit < C) {
        // Case 1: Cannot afford the one-time cost C.
        // We can only complete the normal missions.
        cout << normal_profit;
    } else {
        // Case 2: We can afford C. 
        // We compare not paying vs. paying (but only if paying is profitable).
        
        // P_Special = (Value of Special Missions) - (Cost C)
        ll special_net_profit = special_missions_value - C;
        
        // Final profit is P_Normal + max(0, P_Special).
        // If P_Special < 0, we don't pay C and only get P_Normal (since max(0, P_Special) = 0).
        // If P_Special >= 0, we pay C and get P_Normal + P_Special.
        ll max_coins = normal_profit + max(0LL, special_net_profit);
        
        cout << max_coins;
    }

    nl;
}

int main()
{
    FAST_IO;
    
    int T;
    if (cin >> T) {
        while(T--) {
            solve();
        }
    }
    
    return 0;
}