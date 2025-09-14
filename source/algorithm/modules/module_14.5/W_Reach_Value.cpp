

#include <bits/stdc++.h>
using namespace std;
bool reach(long long current, long long target){


    if(current == target) return true; 
    if(current > target) return false; 

    return reach(current * 10, target) || reach(current * 20, target); 
}
int main()
{
    int t; 
    cin >> t; 
    while (t--)
    {
        long long n;
        cin >> n; 
        reach(1, n);
        if(reach(1, n)) cout << "YES"; 
        else cout << "NO"; 
    
        cout << "\n";
    }
    
    return 0;
}