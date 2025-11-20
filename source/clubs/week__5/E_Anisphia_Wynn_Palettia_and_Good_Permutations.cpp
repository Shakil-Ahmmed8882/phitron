#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// Precompute primes efficiently using Sieve of Eratosthenes
const int MAXN = 200005;
bool is_prime_cache[MAXN];

void sieve() {
    fill(is_prime_cache, is_prime_cache + MAXN, true);
    is_prime_cache[0] = is_prime_cache[1] = false;
    for (int i = 2; i * i < MAXN; ++i) {
        if (is_prime_cache[i]) {
            for (int j = i * i; j < MAXN; j += i)
                is_prime_cache[j] = false;
        }
    }
}

void solve()
{
    int n;
    if (!(cin >> n)) return;

    // Edge case: n=3
    // Lonely: 1, 3. Evens: 2.
    // We can't perfectly buffer 1 and 3.
    // Output: 2 1 3 -> (2,1,3) is bad. Total 1 bad index (<= 6). Valid.
    if (n == 3) {
        cout << "2 1 3";
        nl;
        return;
    }

    vector<int> evens;
    vector<int> lonely; // 1 and primes > n/2
    vector<int> rest;   // Composite odds and small primes
    vector<bool> used(n + 1, false);

    // 1. Collect Evens (The backbone)
    // Any triplet (Even, X, Even) is automatically GOOD because gcd(Even, Even) >= 2.
    for (int i = 2; i <= n; i += 2) {
        evens.push_back(i);
        used[i] = true;
    }

    // 2. Collect Lonely Numbers (1 and Primes > n/2)
    // These are coprime to almost everyone. We must isolate them using Evens.
    lonely.push_back(1);
    used[1] = true;
    for (int i = n / 2 + 1; i <= n; ++i) {
        if (is_prime_cache[i]) {
            lonely.push_back(i);
            used[i] = true;
        }
    }

    // 3. Collect Rest (Small primes and composite odds)
    // We chain them by prime factors to ensure connectivity.
    // First add all odd multiples of 3, then remaining multiples of 5, etc.
    for (int p = 3; p <= n / 2; p += 2) {
        if (is_prime_cache[p]) {
            // Add all odd multiples of p that aren't used yet
            for (int k = p; k <= n; k += 2 * p) {
                if (!used[k]) {
                    rest.push_back(k);
                    used[k] = true;
                }
            }
        }
    }

    vector<int> result;
    
    // Part A: Append the "Rest" chain first
    // These numbers generally share factors with neighbors (e.g., 3, 9, 15...)
    for (auto x : rest) result.push_back(x);

    // Part B: Interleave Evens and Lonely numbers
    // Pattern: Even, Lonely, Even, Lonely...
    // This buffers every "dangerous" lonely number with safe Evens.
    int e = 0, l = 0;
    while (e < evens.size() || l < lonely.size()) {
        // Always try to place an Even first or between Lonely numbers
        if (e < evens.size()) result.push_back(evens[e++]);
        if (l < lonely.size()) result.push_back(lonely[l++]);
    }

    // Output the permutation
    fr(i, n) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    nl;
}

int main()
{
    FAST_IO;
    sieve(); // Run sieve once at the start
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}