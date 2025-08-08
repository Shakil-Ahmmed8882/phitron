
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while(t--){
        string s; 
        cin>> s;
        stack<int> stk; 

        for(char c: s){
            if(!stk.empty() && stk.top() == '0' && c == '1'){
                stk.pop();
            }else{
                stk.push(c);
            }
        }
        cout << (stk.empty()? "YES":"NO") << endl; 
    }

    return 0;
}