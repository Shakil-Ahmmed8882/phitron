#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define nl '\n'

void solve(int t){
    long long n;
    cin>>n;

    //... 
    long long a=1;
    while(a*2<=n) a*=2;
    cout<<max(a/2,n-a+1)<<nl;
}

int main(){
    FAST;
    int tt;
    cin>>tt;
    for(int i=1;i<=tt;i++) solve(i);
    return 0;
}
