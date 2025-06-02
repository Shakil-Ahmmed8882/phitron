
#include <stdio.h>
// Problem J: Multiples
// Time Limit: 1 second
// Memory Limit: 256 megabytes
//
// Description:
// Given two numbers A and B. Print "Multiples" if A is a multiple of B or vice versa.
// Otherwise print "No Multiples".
//
// Input:
// Only one line containing two numbers A, B (1 <= A, B <= 10^6)
//
// Output:
// Print "Multiples" or "No Multiples" corresponding to the read numbers.
//
// Examples:
// Input:
// 9 3
// Output:
// Multiples
//
// Input:
// 6 24
// Output:
// Multiples
//
// Input:
// 12 5
// Output:
// No Multiples
//
// Note:
// A is said to be a Multiple of B if B is divisible by A.
// First Example :
// 9 is divisible by 3, So the answer is: Multiples.
// Second Example :
// 6 is not divisible by 24 but
// 24 is divisible by 6, So the answer is: Multiples.
// Third Example :
// 12 is not divisible by 5 and 5 is not divisible by 12.
// So the answer is: No Multiples.
int main()
{
    int a, b; 
    scanf("%d %d", &a, &b);

    if(a%b ==0 || b%a == 0){
        printf("Multiples\n");
    }else{
        printf("No Multiples\n");
    }


    return 0;
}