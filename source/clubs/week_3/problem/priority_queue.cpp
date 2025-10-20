

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


    // priority_queue<int> pq;
    // pq.push(1); 
    // pq.push(2); 
    // pq.push(3); 
    // pq.push(4); 
    // pq.pop();  
    // // cout << pq.top() << "\n";
    // cout << pq.size() << "\n";
    // cout << pq.empty() << "\n";

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq; 

    pq.push({200, 2}); 
    pq.push({10, 20}); 
    pq.push({50, 100}); 


    while(!pq.empty()){
        cout << pq.top().first << " " << pq.top().second << "\n";
        pq.pop(); 
    }

    // cout << pq.size() << "\n";
    // cout << pq.empty() << "\n";



    
    return 0;
}
