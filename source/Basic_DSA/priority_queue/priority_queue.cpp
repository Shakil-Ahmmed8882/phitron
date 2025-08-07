#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    

    // priority_queue<int> pq; // max heap 
    priority_queue<int, vector<int>, greater<int>> pq; // min heap 

    pq.push(10);
    pq.push(20); 
    pq.push(5) ; 
    pq.push(15);
    pq.push(150);
    pq.push(149);
    pq.push(140);
    cout << pq.top() << endl;
    return 0;
}