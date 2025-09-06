


#include <bits/stdc++.h>
using namespace std;
int leaders[1005]; 

int find(int node){
    while (leaders[node] != -1)
    {
        node = leaders[node]; 
    }

    return node; 
    
}
int main()
{

    memset(leaders, -1, sizeof(leaders)); 
    
    leaders[0] = 1;
    leaders[1] = 5;
    leaders[2] = -1;
    leaders[3] = 2;
    leaders[4] = 3;
    leaders[5] = 4;

    cout << find(4) << endl; 

    return 0;
}