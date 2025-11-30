#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;
    if(!(cin>>n)) return;
    int res=0;

    //...
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i==0) res=x;
        else res &= x;
    }
    cout<<res<<"\n";
}

int main(){
    FAST_IO;
    int t;
    //.. 
    if(!(cin>>t)) return 0;
    while(t--) solve();
    return 0;
}
