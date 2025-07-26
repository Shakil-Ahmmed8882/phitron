

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> s; 
    queue<int> q; 

    for(int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        s.push(x);
    }

    for(int i = 0; i < m; i++){
        int x; 
        cin >> x; 
        q.push(x);
    }

    if(s.size() != q.size()){
        cout << "NO" << endl; 
        return 0; 
    }
    
    bool same = true; 
    while(!s.empty()){
        
        if(s.top() != q.front()){
            same = false; 
            break; 
        }
        
        s.pop(); 
        q.pop(); 
    }
    
    if(same)
        cout << "YES" << endl; 
    else 
        cout << "NO" << endl; 






    return 0;
}