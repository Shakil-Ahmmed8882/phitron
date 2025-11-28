

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    FAST_IO;
    int t; 
    cin >> t; 

    while (t--)
    {
        int n; 
        cin >> n;

        for(int i = n; i >=1; i--){
            cout << i << " ";
        }
        cout << "\n";
    }
    
    
    return 0;
}
