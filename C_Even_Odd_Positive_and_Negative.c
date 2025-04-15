
#include <stdio.h>
// C. Even, Odd, Positive and Negative
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// Given N numbers. Count how many of these values are even, odd, positive and negative.
//
// Input
// First line contains one number N (1 <= N <= 10^3) number of values.
// Second line contains N numbers (-10^5 <= Xi <= 10^5).
// Output
// Print four lines with the following format:
// First Line: "Even: X", where X is the number of even numbers in the given input.
// Second Line: "Odd: X", where X is the number of odd numbers in the given input.
// Third Line: "Positive: X", where X is the number of positive numbers in the given input.
// Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.
// Example
// InputCopy
// 5
// -5 0 -3 -4 12
// OutputCopy
// Even: 3
// Odd: 2
// Positive: 1
// Negative: 3
// Note
// First Example :
// Even Numbers are : 0, -4 , 12
// Odd Numbers are : -5 , -3
// Positive Numbers are : 12
// Negative Numbers are : -5 , -3 , -4
int main()
{
    int n; 
    int x; 
    int even = 0, odd=0, pos =0, neg = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(x % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        if(x > 0){
            pos++;
        }
        else if(x < 0){
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}