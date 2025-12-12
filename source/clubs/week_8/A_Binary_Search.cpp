



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    FAST_IO;
    int n, q; 
    cin >> n >> q; 
    vector<int> a(n); 
    for(int i =0; i < n; i++)
        cin >> a[i]; 

    for(int i = 0 ; i < q; i ++){
           int key,  l = 0, r = n -1;
           cin >> key; 
        bool is_found = false; 

        while (l <= r){
            int mid = (l + r) / 2; 
            if(a[mid] == key){
                is_found= true; 
                break; 
            } else if(key < a[mid]){
                r = mid -1; 
            }else{
                l = mid+1; 
            }
        }
        
        if(is_found)    
            cout << "YES" << "\n"; 
        else{
            cout << "NO" << "\n"; ;
        }
    }


    

    
    return 0;
}
