/*
Reversing a Queue
Difficulty: Easy

Problem Statement:
You are given a queue of 'N' elements. Your task is to reverse the order of elements present in the queue.

You can only use the standard operations of the QUEUE STL:

1. enqueue(x): Add an item x to the rear of the queue.
2. dequeue(): Removes an item from the front of the queue.
3. size(): Returns the number of elements in the queue.
4. front(): Finds front element.
5. empty(): Checks whether the queue is empty or not.

Constraints:
1 <= T <= 100 
1 <= N <= 3000
-10^5 <= Queue[i] <= 10^5

Time Limit: 1 sec

Sample Input 1:
2
1
9
5
10 6 8 12 3

Sample Output 1:
9 
3 12 8 6 10

Explanation 1:
For the first test case, the queue has only one element, i.e. 9. So, even after reversing, it remains the same.
For the second test case, initial queue = 10 6 8 12 3 → after reversing = 3 12 8 6 10

Sample Input 2:
2
2
99 89
6
1 2 3 4 5 6

Sample Output 2:
89 99
6 5 4 3 2 1
*/

#include <bits/stdc++.h>
using namespace std;

// Function to reverse the queue
queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;

    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    return q;
}


int main() {
    queue<int> q;
    q.push(10);
    q.push(6);
    q.push(8);
    q.push(12);
    q.push(3);

    reverseQueue(q);
    return 0;
}
