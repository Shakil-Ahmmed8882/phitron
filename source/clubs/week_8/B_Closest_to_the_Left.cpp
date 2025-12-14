#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    FAST_IO;

    int n, q; 
    cin >> n>> q; 
    vector<int> a(n); 
    for(int i = 0; i < n; i++)
        cin >> a[i]; 

    for(int i = 0; i < q; i++){
        int key,  l = 0, r = n -1, ans = - 1, mid; 
        cin >> key; 
        while (l <= r)
        {
            mid = (l + r) / 2; 
            if(key >= a[mid]){
                ans = mid; 
                l = mid + 1; 

            }else{
                r = mid - 1; 
            }

        }
        cout << (ans + 1) << "\n";         
        

    }
    
    
    return 0;
}
