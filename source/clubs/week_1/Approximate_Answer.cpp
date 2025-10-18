
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,k; 
    cin >> x >> y >> k;

    int diff = abs(x - y); 

    if(diff <= k) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
