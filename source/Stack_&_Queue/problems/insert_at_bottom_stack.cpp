/*
Insert An Element At Its Bottom In A Given Stack
Difficulty: Easy

Problem Statement:
You are given a stack/deque of integers 'MY_STACK' and an integer ‘X’. 
Your task is to insert ‘X’ to the bottom of ‘MY_STACK’ and return the updated stack/deque.

Note:
If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom of the stack 
and the last element represents the element at the top of the stack.

Example:
Let ‘MY_STACK’ = [7, 1, 4, 5] and ‘X’ = 9. 
So, ‘MY_STACK’ after insertion becomes [9, 7, 1, 4, 5].

Follow Up:
Try to do this without using any other data structure.

Constraints:
1 <= T <= 100
1 <= N <= 10^4
0 <= X and MY_STACK[i] <= 10^5

Time Limit: 1 second

Sample Input 1:
2
3 8
4 3 2
4 5
6 2 4 9

Sample Output 1:
8 4 3 2
5 6 2 4 9

Explanation:
Test Case 1:
We are given MY_STACK = [4,3,2] and X = 8.
We insert X at the bottom → MY_STACK = [8, 4, 3, 2]

Test Case 2:
Insert 5 at bottom of [6,2,4,9] → [5, 6, 2, 4, 9]
*/

#include <bits/stdc++.h>
using namespace std;

// Function to insert an element at the bottom of the stack
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    stack<int> new_st; 

    while (!st.empty()) {
        new_st.push(st.top());
        st.pop(); 
    }

    st.push(x); 

    while (!new_st.empty()) {
        st.push(new_st.top());
        new_st.pop(); 
    }

    return st; 
}

// Main function for local testing
int main() {
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    int x = 8;
    pushAtBottom(st, x);
    return 0;
}
