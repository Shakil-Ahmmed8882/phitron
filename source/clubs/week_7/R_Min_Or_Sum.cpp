#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;
    cin>>n;
    int big=0;

    //...
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        big |= v;
    }
    cout<<big<<"\n";
}

int main(){
    FAST_IO;
    int t;
    cin>>t;
    //...
    while(t--) solve();
    return 0;
}
