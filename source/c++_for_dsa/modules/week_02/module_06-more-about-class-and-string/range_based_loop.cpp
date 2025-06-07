#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    getline(cin, s) ; 
    int n; 
    cin >> n; 
    int a[n]; 

    for(int i = 0; i  < n ; i++){
        cin >> a[i]; 
    }
    
    
    // reverse(a, a + n); 
for(int i = 0; i < n / 2; i++) {
    int temp = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = temp;
}





    for(int e: a){
        cout << e << " "; 
    }


    // for(int i = 0; i < s.size(); i++){
    //     cout << s[i] << endl; 
    // }
    // for(char c: s){
    //     cout << c << endl; 
    // }

    // reverse(s.begin(), s.end()); 
    // cout << s << endl; 


    return 0;
}