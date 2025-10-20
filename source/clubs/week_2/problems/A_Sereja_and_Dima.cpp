#include <bits/stdc++.h>
using namespace std;

#define ll long long
// int vector
#define vi vector<int>
#define vvi vector<vi>

// long long vector
#define vll vector<ll>
#define vvl vector<vll>
// bool vector
#define vb vector<bool>
#define vvb vector<vb>
// char vector
#define vc vector<char>

// loops, new line, debug, sort, unique
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(all(v))
#define unq(v) v.resize(distance(v.begin(), unique(all(v))))

int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    // input
    int n;
    cin >> n;
    deque<int> dq; 
    for( int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        dq.push_back(x);
    }

    int sereja = 0, dima = 0, who = 1;

   
    while(!dq.empty()){
        int left = dq.front(); 
        int right = dq.back(); 

        int mx = max(left, right); 
        if(who % 2 != 0){
            sereja += mx; 
        }else{
            dima += mx; 
        }

        if(mx == left){
            dq.pop_front(); 
        }else{
            dq.pop_back(); 
        }

        who++;
    }


    cout << sereja << " " << dima << "\n";


    
    return 0;
}
