#include <bits/stdc++.h>
using namespace std;

int val[105];
int weight[105];
int dp[105][105]; 
int knapSack(int i, int mx_weight)
{

    if(i < 0 || mx_weight <=0)
        return 0; 
    if(dp[i][mx_weight] != -1)
        return dp[i][mx_weight]; 

    if (weight[i] <= mx_weight)
    {
        
        int opt1 = knapSack(i - 1, mx_weight - weight[i]) + val[i];
        int opt2 = knapSack(i - 1, mx_weight);
        dp[i][mx_weight] = max(opt1, opt2);
        return dp[i][mx_weight]; 
        
    }else{
        
        dp[i][mx_weight] =  knapSack(i - 1, mx_weight);
        return dp[i][mx_weight]; 
    }
}

int main()
{

    int n, bag_limit;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> val[i];

    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cin >> bag_limit;

for(int i = 0; i <=n ; i++)
    for(int j = 0; j <=bag_limit ; j++)     
        dp[i][j] = -1;

cout << knapSack(n-1, bag_limit); 

    return 0;
}