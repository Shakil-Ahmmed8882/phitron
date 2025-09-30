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

vi v(100);
int dp[105][105];

int subset_sum(int i , int sum){



    if( i < 0 ){
        if(sum == 0){
            return 1;
        }else{
            return 0;
        }
    }

    if(dp[i][sum] != -1){
        return dp[i][sum];
    }

    if(v[i] <= sum){
        // 2 options 
        int opt1 = subset_sum(i - 1, sum - v[i]); 
        int opt2 = subset_sum(i - 1, sum); 
        dp[i][sum] =  opt1 + opt2; 
        return dp[i][sum];
    }else{
        dp[i][sum] = subset_sum(i - 1, sum);
        return dp[i][sum]; 
    }
}


int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i <= 105; i++){
        for(int j = 0; j <= 105; j++){
            dp[i][j] = -1; 
        }
    }

    // input
    int n;
    cin >> n;
    fr(i, n) cin >> v[i];
    int tgt;
    cin >> tgt;
    


    cout << subset_sum(n - 1, tgt) << endl;


    return 0;
}
