#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long
#define FAST_IO                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve() {
    int n;
    // Read n (up to 10^5)
    if (!(cin >> n)) return;

    vector<ll> a(n);
    // Initialize a_min with a value larger than max a_i (10^9)
    ll a_min = 2000000000LL; 

    // 1. Read the array and find the minimum element
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        // Note: a_i is up to 10^9, so use ll
        if (a[i] < a_min) {
            a_min = a[i];
        }
    }

    // 2. Check the condition: Is every element divisible by a_min?
    bool is_possible = true;
    for (int i = 0; i < n; ++i) {
        // If an element is not divisible by a_min, the condition is impossible.
        if (a[i] % a_min != 0) {
            is_possible = false;
            break;
        }
    }

    // 3. Output the result
    if (is_possible) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

// -------------------

int main() {
    FAST_IO;
    int t;
    // Read the number of test cases (t <= 10^4)
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}