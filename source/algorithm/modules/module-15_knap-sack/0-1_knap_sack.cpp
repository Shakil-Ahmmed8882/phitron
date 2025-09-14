#include <bits/stdc++.h>
using namespace std;

int val[105];
int weight[105];
int knapSack(int i, int mx_weight)
{

    if(i < 0 || mx_weight <=0)
        return 0; 


    if (weight[i] <= mx_weight)
    {
        // 2 options
        // 1. keep
        // 2. won't keep
        int opt1 = knapSack(i - 1, mx_weight - weight[i]) + val[i];
        int opt2 = knapSack(i - 1, mx_weight);
        return max(opt1, opt2);
    }else{
        
        return knapSack(i - 1, mx_weight);
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

cout << knapSack(n-1, bag_limit); 

    return 0;
}