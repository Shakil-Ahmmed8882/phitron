
#include <bits/stdc++.h>
using namespace std;
int val[1005];
int weight[60];

int knapSack(int i, int max_capacity)
{
    if (i < 0 || max_capacity <= 0)
        return 0;
    
    if (weight[i] <= max_capacity)
    {

        // 2 options
        // 1 bag a nibo
        // 2 bag a nibona
        int opt1 = knapSack(i - 1, max_capacity - weight[i]) + val[i];
        int opt2 = knapSack(i - 1, max_capacity);
        return max(opt1, opt2);
    }
    else
    {
        return knapSack(i - 1, max_capacity);
    }
}

int main()
{
    int n, mx_weight;
    cin >> n >> mx_weight;

    for (int i = 0; i <= n; i++)
    {
        cin >> weight[i];
        cin >> val[i];
    }

    cout << knapSack(n - 1, mx_weight);

    return 0;
}