#include <bits/stdc++.h>
using namespace std;




/*


# Problem: Find the Maximum Number
# ----------------------------------
# Time Limit: 1 second
# Memory Limit: 256 megabytes

# Description:
# Given a number N, followed by N integers,
# your task is to find and print the maximum number among them.

# Input:
# - The first line contains a single integer N (1 ≤ N ≤ 10^3), the count of numbers.
# - The second line contains N integers Xi (0 ≤ Xi ≤ 10^9), the numbers to process.

# Output:
# - Print a single integer: the maximum number among the N integers.

# Example:
# Input:
# 5
# 1 8 5 7 5
# Output:
# 8

*/

int main()
{
    int n;
    cin >> n;  
    int a[n]; 

    for(int i = 0; i < n ; i++){
        cin >> a[i]; 
    }

    int mx = 0;  
    for(int i = 0; i < n ; i++){
        mx = max(mx, a[i]);
    }

    cout << mx; 



    return 0;
}