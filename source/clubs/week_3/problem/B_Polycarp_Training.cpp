

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO  ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{

    FAST_IO; 

    int n; 
    cin >> n; 

    multiset<int> ml; 

    for(int i = 0; i < n; i++){
        int x; 
        cin >> x; 
         ml.insert(x); 
    }

    int ans = 0, day = 1;

    while(!ml.empty()){
        auto LB = ml.lower_bound(day);
        if(LB != ml.end()){
            ans++; 
            ml.erase(LB);
        }else{
            break; 
        }
        day++; 
    }


    cout << ans << endl;





     



    
    return 0;
}
