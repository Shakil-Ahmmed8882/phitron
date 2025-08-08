/*
Maximum Equal Stack Sum
Difficulty: Easy

Problem Statement:
Given three filled stacks namely ‘stack1’, ‘stack2’ and ‘stack3’ of positive numbers, 
the task is to find the possible equal maximum sum of the stacks with the removal of top elements allowed.

Example:
Let the stacks be:

stack1: 8 5 3 (sum = 16)
stack2: 2 2 4 9 6 (sum = 23)
stack3: 2 1 2 3 (sum = 8)

After removing 8 from stack1, 6 and 9 from stack2, and nothing from stack3, all become 8 in sum.

Return:
The maximum possible equal sum that can be achieved by removing top elements from any of the stacks.

Notes:
- Do not print anything. Just return an integer.
- It is guaranteed that all elements are positive.
- It can be proved that a non-negative answer always exists.

Constraints:
1 <= T <= 50
1 <= N <= 10^4
1 <= stackData <= 10^9

Time limit: 1 second

Sample Input 1:
2
2 4 1 9 -1
1 6 3 -1
5 2 1 -1
8 2 1 -1 
1 1 1 -1 
6 3 -1

Sample Output 1:
7
0

Explanation:
In the first test case, by removing certain elements from the top of each stack, 
we can make all sums equal to 7.
In the second test case, we cannot equalize them to any positive value, so the result is 0.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of stack elements
int getsum(stack<int> st) {
    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    return sum;
}

// Function to find maximum equal sum of three stacks
int maxSum(stack<int>& stk1, stack<int>& stk2, stack<int>& stk3) {
    int sum1 = getsum(stk1);
    int sum2 = getsum(stk2);
    int sum3 = getsum(stk3);

    while (true) {
        if (sum1 == sum2 && sum2 == sum3) break;

        if (sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= stk1.top();
            stk1.pop();
        } else if (sum2 >= sum1 && sum2 >= sum3) {
            sum2 -= stk2.top();
            stk2.pop();
        } else if (sum3 >= sum1 && sum3 >= sum2) {
            sum3 -= stk3.top();
            stk3.pop();
        }
    }

    return sum1;
}

// Minimal main function for local testing
int main() {
    stack<int> s1, s2, s3;

    s1.push(3);
    s1.push(5);
    s1.push(8);  

    s2.push(6);
    s2.push(9);
    s2.push(4);
    s2.push(2);
    s2.push(2);  

    s3.push(3);
    s3.push(2);
    s3.push(1);
    s3.push(2);  

    maxSum(s1, s2, s3);
    return 0;
}
