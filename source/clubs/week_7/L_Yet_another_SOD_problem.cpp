#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

ll cnt3(ll x){
    if(x<1) return 0;
    return x/3;
}

void solve(){
    ll lft, rit;
    
    if(!(cin>>lft>>rit)) return;

    ll cR = cnt3(rit);
    ll cL = cnt3(lft-1);
    ll ans = cR - cL;
    cout<<ans<<"\n";
}

int main(){
    FAST_IO;
    int t;
    //... 
    if(!(cin>>t)) return 0;
    while(t--) solve();
    return 0;
}
