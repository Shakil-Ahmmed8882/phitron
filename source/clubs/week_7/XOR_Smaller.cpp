

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    FAST_IO;
    
    int t; 
    cin >> t; 

    while (t--)
    {
        int n; 
        cin >> n;
        vector<int> a(n); 
        int x = INT_MAX; 
        for(int i =0; i < n; i++){
            cin >> a[i]; 
            x &= a[i];
        }
        int might_be = 1; 
        int ans = 0; 

        while (x){
            if(x & 1){
                ans += might_be; 
            }

            might_be *= 2; 
            // x = x >> 1;
            x/=2;
        }

        cout << ans << "\n"; 
       
        
    }
    
    return 0;
}
