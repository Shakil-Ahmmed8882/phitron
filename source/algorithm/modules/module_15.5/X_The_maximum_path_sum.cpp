

#include <bits/stdc++.h>
using namespace std;

int n, m;
int matrix[10][10];

int find_max_sum(int i, int j)
{
    if (i >= n || j >= m)
        return INT_MIN;

    if (i == n - 1 && j == m - 1)
        return matrix[i][j];

    int right_sum = find_max_sum(i, j + 1); 
    int down_sum = find_max_sum(i + 1, j); 
    return matrix[i][j] + max(right_sum, down_sum); 
}



int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    cout << find_max_sum(0, 0);
    return 0;
}