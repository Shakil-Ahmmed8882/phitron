

#include <bits/stdc++.h>
using namespace std;


int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a , b ; 
    cin >> a >> b; 
    
    if(a == b){
        cout << a + b; 
    } else if(a > b){
        cout << a * 2 - 1; 
    } else {
        cout << b * 2 - 1; 
    } 



    return 0;
}
