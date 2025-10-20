#include <bits/stdc++.h>
using namespace std;

bool canTransform(string A, string B, string C, string D) {
    int n = A.size();
    for (int i = 0; i <= (n - 1) / 2; i++) {
        vector<int> countA(2), countB(2), countC(2), countD(2);

        // Count bits in current group
        countA[A[i]-'0']++; 
        countA[A[n-1-i]-'0']++;
        countB[B[i]-'0']++; 
        countB[B[n-1-i]-'0']++;

        // Count bits in target group
        countC[C[i]-'0']++; 
        countC[C[n-1-i]-'0']++;
        countD[D[i]-'0']++; 
        countD[D[n-1-i]-'0']++;

        // Compare the total counts in the group
        if ((countA[0]+countB[0] != countC[0]+countD[0]) || 
            (countA[1]+countB[1] != countC[1]+countD[1]))
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string A, B, C, D;
        cin >> A >> B >> C >> D;

        if (canTransform(A, B, C, D))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
