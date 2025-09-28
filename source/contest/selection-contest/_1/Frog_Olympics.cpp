#include <bits/stdc++.h>
using namespace std;


bool canReach(int n, int a, int b) {
    int mod = a % b;
    for (int y = 0; y <= a; y++) { 
        if (n - b*y < 0) break;
        if ((n - b*y) % a == 0) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        bool leapy = canReach(n, 3, 4);
        bool jumpster = canReach(n, 3, 5);
        
        if (leapy && jumpster) cout << "Both\n";
        else if (leapy) cout << "Leapy\n";
        else if (jumpster) cout << "Jumpster\n";
        else cout << "None\n";
    }
    return 0;
}
