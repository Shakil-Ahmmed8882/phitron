#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define nl cout << "\n"

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

/**
 * @brief Solves the We Need the Zero problem in O(N) time.
 * The solution depends on the parity of N:
 * - If N is odd, the unique solution is x = total_xor_sum.
 * - If N is even, a solution exists only if total_xor_sum is 0 (x=0 works).
 */
void solve() {
    int N;
    // N up to 10^5
    if (!(cin >> N)) return;

    // Use int for array elements and XOR sum since values are < 2^8 (or 2^30).
    int total_xor_sum = 0;
    int a;
    
    // Step 1: Calculate the total XOR sum S_A in O(N).
    for (int i = 0; i < N; ++i) {
        if (!(cin >> a)) return;
        total_xor_sum ^= a;
    }

    // Step 2: Apply the logic based on the parity of N.
    if (N % 2 != 0) {
        // Case N is odd: Unique solution is x = S_A.
        cout << total_xor_sum << "\n";
    } else {
        // Case N is even: Solution exists only if S_A is already 0.
        if (total_xor_sum == 0) {
            // If S_A = 0, any x works. Output x=0 (the simplest).
            cout << 0 << "\n";
        } else {
            // If S_A != 0, no solution x exists.
            cout << -1 << "\n";
        }
    }
}

int main()
{
    FAST_IO;
    
    int T;
    // Reading the number of test cases
    if (!(cin >> T)) return 0;
    
    // Process all test cases. Overall complexity O(SUM N)
    while (T--) {
        solve();
    }
    
    return 0;
}