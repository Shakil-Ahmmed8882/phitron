

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
        int n, q; 
        cin >> n >> q; 
        vector<int> a(n), prefix(n + 1); // why n + 1? 
        for(int i = 0; i < n; i++){
            cin >> a[i]; 
        }
        sort(a.rbegin(), a.rend()); 

        for(int i = 1;  i <= n; i++){
            prefix[i] = prefix[i - 1] + a[i- 1]; 
        }



   
        for(int i = 0; i < q; i++){
            int k, ans = -1; 
            cin >> k; 

            auto it = lower_bound(prefix.begin(), prefix.end(), k); 

            if(it != prefix.end()){
                ans = it - prefix.begin(); 
            }
            // 
            // for(int j = 0; j < n; j++){
            //     sum+= a[j]; 
            //     if(sum >= k){
            //         ans = j + 1; 
            //         break; 
            //     }
            // }

            cout << ans << "\n"; 
        }
    }
    
   
   
    
    
    return 0;
}
