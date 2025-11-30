#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);
const long long MOD=1000000007;

ll modPower(ll base,ll expnt){
    //.. 
    ll result=1;
    base%=MOD;
    while(expnt>0){
        if(expnt&1) result=(result*base)%MOD;
        expnt>>=1;
        base=(base*base)%MOD;
    }
    return result;
}

void solve(){
    ll n;
    if(!(cin>>n)) return;
    if(n==0){
        cout<<1<<"\n";
        return;
    }
    //..
    ll expnt=n-1;
    ll answer=modPower(2,expnt);
    cout<<answer<<"\n";
}

int main(){
    FAST_IO;



    ll testCount;
    if(!(cin>>testCount)) return 0;
    while(testCount--) solve();
    return 0;
}
