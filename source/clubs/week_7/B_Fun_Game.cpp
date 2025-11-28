

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    FAST_IO;
    
    int T; 
    cin >> T;


    while(T--){
        int n; 
        cin >> n; 
        string s, t; 
        cin >> s >> t; 

        if(s == t || s[0] == '1'){
            cout << "YES" << "\n";
            continue;
        }

        int pos = -1; 
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                pos = i; 
                break;
            }
        }


        if(pos != -1){
            bool ok = true; 
            
            for(int i = 0; i < n; i++){
                if(s[i] != t[i]){
                    if( i < pos){
                        ok = false; 
                        break; 
                    }
                }
            }
            if(ok){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }

        }else{
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}
