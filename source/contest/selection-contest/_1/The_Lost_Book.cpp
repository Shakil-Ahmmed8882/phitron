#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int,int>> books(n); 

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        books[i] = {x, i}; 
    }

    
    sort(books.begin(), books.end());

    long long target;
    cin >> target;

    int l = 0, r = n - 1;
    int found_index = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (books[mid].first == target) {
            found_index = books[mid].second; 
            break;
        } else if (books[mid].first < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << found_index << "\n";
    return 0;
}
