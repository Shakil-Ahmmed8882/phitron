#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FAST ios::sync_with_stdio(false);cin.tie(NULL);

void solve(int t){
    ll n;
    cin>>n;
    vector<ll> b(n-1), a(n);
    for(auto &x:b) cin>>x;
    a[0]=b[0];
    a[n-1]=b[n-2];
    for(int i=1;i<n-1;i++) a[i]=b[i]|b[i-1];
    for(int i=0;i<n-1;i++){
        if(b[i]!=(a[i]&a[i+1])){
            cout<<-1<<"\n";
            return;
        }
    }
    for(auto x:a) cout<<x<<" ";
    cout<<"\n";
}

int main(){
    FAST;
    int tt;
    cin>>tt;
    for(int i=1;i<=tt;i++) solve(i);
    return 0;
}
