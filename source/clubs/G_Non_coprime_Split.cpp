#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// Function to compute the Greatest Common Divisor (GCD) of two numbers
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
    
    // Read the array, calculate sum, and find the maximum element a_max
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum_a += a[i];
        if (a[i] > a_max) {
            a_max = a[i];
        }
    }

    ll z; // The number of swords each person took
    ll y; // The minimum number of people
    
    // Step 1: Calculate the maximal possible z (G)
    ll G = 0;
    bool all_equal = true;
    for (int i = 0; i < n; ++i) {
        ll diff = a_max - a[i];
        if (diff > 0) {
            G = gcd(G, diff);
            all_equal = false;
        }
    }

    // Step 2: Determine y and z
    
    if (all_equal) {
        // If all a_i are equal (e.g., [2, 2, 2]), G=0. 
        // We assume the simplest minimal configuration: x = a_max + 1, z=1.
        z = 1;
        y = n;
    } else {
        // Optimal z is the GCD of all differences.
        z = G;
        
        // Optimal x is a_max.
        // y = (n * a_max - sum_a) / z
        y = (n * a_max - sum_a) / z;
    }
    
    cout << y << " " << z << "\n";
}

int main() {
    FAST_IO;
    int t; 
    cin >> t; 
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}