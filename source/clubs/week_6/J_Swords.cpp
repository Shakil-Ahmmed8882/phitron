#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);


ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    
    
    if (!(cin >> n)) return;

    vector<ll> a(n);
    ll sum_a = 0;
    ll a_max = 0;
    bool all_equal = true;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum_a += a[i];
        // ... 
        if (a[i] > a_max) 
            a_max = a[i];

        if (i > 0 && a[i] != a[0])
            all_equal = false;
    }

    ll z; 
    ll y; 

    if (all_equal) {
        y = 1;
        z = 1000000000; 
        
    } else {
        
        ll G = 0;
        for (int i = 0; i < n; ++i) {
            ll diff = a_max - a[i];
            if (diff > 0) 
                G = gcd(G, diff);
        }

        z = G;
        y = (n * a_max - sum_a) / z;
    }

    cout << y << " " << z << "\n";
}

int main() {
    FAST_IO;
    solve();
    return 0;
}