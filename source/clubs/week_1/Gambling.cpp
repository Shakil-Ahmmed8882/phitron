#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dice;
    cin >> dice;
 if (dice >= 1 && dice <= 6) {
        cout << 7 - dice;
    } else {
      cout << 7; 
    }
    return 0;
}
