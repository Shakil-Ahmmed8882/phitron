#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<long long> b;
    bool rev = false;




    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (!rev) b.push_back(x);  
        else b.push_front(x);      
        rev = !rev;                
    }




    if (rev) reverse(b.begin(), b.end());

    for (auto it : b) cout << it << " ";
    cout << "\n";
}
