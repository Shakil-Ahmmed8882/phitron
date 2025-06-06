
#include <bits/stdc++.h>
using namespace std;

// V.  Mathematical Expression Problem
 // W. Mathematical Expression Problem

    // 👉 Task:
    // You are given a math expression in the form:
    // A S B = C
    // Where:
    // A, B, and C are numbers
    // S is one of the operators: '+', '-', '*'
    // You need to check if the expression is correct.

    // 👉 Input Format:
    // One line: A S B = C
    // A and B: integers from 0 to 100
    // C: integer from -10^5 to 10^5
    // S: one of '+', '-', '*'
    // '=' is always between the operation and result

    // 👉 Output Format:
    // Print "Yes" if the expression is correct
    // Otherwise, print the correct result of A S B

    // 👉 Examples:

    // Example 1:
    // Input: 5 + 10 = 15
    // Output: Yes

    // Example 2:
    // Input: 3 - 1 = 2
    // Output: Yes

    // Example 3:
    // Input: 2 * 10 = 19
    // Output: 20

    // Now let's implement the solution...
int main()
{

    int a, b, result;
    char symbol, equal; 
    
    cin >> a;
    cin >> symbol;
    cin >> b;
    cin >> equal;
    cin >> result;


    if(symbol == '+'){
        if(a + b == result){
            cout << "Yes"; 
        }else{
            cout << a + b;
        }
    }

    if(symbol == '-'){
        if(a - b == result){
            cout << "Yes"; 
        }else{
            cout << a - b;
        }
    }
    if(symbol == '*'){
        if(a * b == result){
            cout << "Yes"; 
        }else{
            cout << a * b;
        }
    }

    
    return 0;
}