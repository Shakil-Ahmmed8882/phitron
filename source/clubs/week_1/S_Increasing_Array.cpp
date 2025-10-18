#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long movesss = 0;
    for (int i = 1; i < n; i++) {


        if (a[i] < a[i-1]) {
            movesss += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << movesss << endl;
    return 0;
}


