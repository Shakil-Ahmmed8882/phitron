#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl '\n'

int main(){
    FAST_IO;
    int n;
    cin>>n;
    if(n==2||n==3){
        cout<<"NO SOLUTION"<<nl;
        return 0;
    }
//... 
    for(int i=2;i<=n;i+=2){
         cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2)
         cout<<i<<" ";
    cout<<nl;
    return 0;
}
