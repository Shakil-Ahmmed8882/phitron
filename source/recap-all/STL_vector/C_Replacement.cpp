#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n; 
    vector<int> v; 
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        v.push_back(x);
    }

    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            cout << 0 << " "; 
        } else if(v[i] < 0){
            cout << 2 << " "; 
        }else{
            cout << 1 << " "; ; 
        }
    }
    return 0;
}