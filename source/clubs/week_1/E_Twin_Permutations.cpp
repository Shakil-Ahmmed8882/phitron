// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         vector<pair<int,int>> arr; // (value, index)
//         for (int i = 0; i < n; i++)
//             arr.push_back({a[i], i});

//         sort(arr.begin(), arr.end()); // sort by a[i]

//         vector<int> b(n);
//         int num = n;
//         for (auto &p : arr) {
//             b[p.second] = num--; // assign largest b to smallest a
//         }

//         for (int i = 0; i < n; i++)
//             cout << b[i] << " ";
//         cout << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            b[i] = n - a[i] + 1; // ensures a[i] + b[i] = n + 1 (constant)
        }
        
        for (int i = 0; i < n; i++) cout << b[i] << " ";
        cout << "\n";
    }
    return 0;
}
