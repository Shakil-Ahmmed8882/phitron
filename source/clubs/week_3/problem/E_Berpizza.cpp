

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


    int n, customer_no = 1;
    cin >> n;
    
     set<pair<int,int>> monocrap;
     multiset<pair<int,int>> polycrap;
     vector<int> ans; 

     for(int i = 1; i <= n; i++){
        int type;
        cin >> type; 

        if(type == 1){
            int money; 
            cin >> money; 
            monocrap.insert({customer_no,money}); 
            polycrap.insert({money, -customer_no});
            customer_no++;  
        }
        else if(type == 2){
            
            int pos = monocrap.begin()->first; 
            int money = monocrap.begin()->second; 
            ans.push_back(pos); 
            monocrap.erase(monocrap.begin()); 
            polycrap.erase({money, -pos}); 

        } else{
            int pos = -polycrap.rbegin()->second;  
            int money = polycrap.rbegin()->first; 

            ans.push_back(pos); 
            polycrap.erase(--polycrap.end()); 
            monocrap.erase({pos, money}); 
        }

    }
    
    for(auto v: ans){
        cout << v << " "; 
    }


    
    return 0;
}
