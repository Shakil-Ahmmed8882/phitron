#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;
    if(!(cin>>n)) return;
    string s;
    cin>>s;
    int dup=0;
    //... 
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) dup++;
    }
    int ans = n - dup;
    cout<<ans<<"\n";
}

int main(){
    FAST_IO;
    int t;

    if(!(cin>>t)) return 0;

    while(t--) solve();
    return 0;
}
