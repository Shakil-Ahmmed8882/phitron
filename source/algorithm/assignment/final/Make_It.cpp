#include <bits/stdc++.h>
using namespace std;

bool is_reached = false;
int dp[100005]; 
void make_it(long long current_value, long long target)
{

    if (current_value > target) return; 
    if(current_value == target){
        is_reached = true; 
        return; 
    }
    if(dp[current_value] != -1) return; 
    dp[current_value] = 1; 
    make_it(current_value * 2, target); 
    make_it(current_value + 3, target); 
}

int main()
{
    int t; 
    cin >> t; 
    while (t--)
    {
        int n; 
        cin >> n; 
        is_reached = false; 
        memset(dp, -1, sizeof(dp)); 
        make_it(1, n);
        if(is_reached) cout << "YES\n"; 
        else cout << "NO\n"; 
    }
    
    return 0;
}