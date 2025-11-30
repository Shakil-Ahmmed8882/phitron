#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;
    if(!(cin>>n)) return;
    vector<int> nums(n);
    int totalXor=0;

    //... 
    for(int i=0;i<n;i++){
        cin>>nums[i];
        totalXor^=nums[i];
    }
    int minXor=totalXor;
    for(int i=0;i<n;i++){
        int xorWithoutOne=totalXor^nums[i];
        minXor=min(minXor,xorWithoutOne);
    }
    cout<<minXor<<"\n";
}

int main(){
    FAST_IO;
    int testCount;
    if(!(cin>>testCount)) return 0;
    while(testCount--) solve();
    return 0;
}
