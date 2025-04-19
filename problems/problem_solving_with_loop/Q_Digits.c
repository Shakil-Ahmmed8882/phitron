
#include <stdio.h>
// H. Digits (Right to Left)
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// Given a number N. Print the digits of that number from right to left separated by space.
//
// Input
// First line contains a number T (1 <= T <= 10) number of test cases.
// Next T lines will contain a number N (0 <= N <= 10^9)
// Output
// For each test case print a single line contains the digits of the number separated by space.
// Example
// InputCopy
// 4
// 121
// 39
// 123456
// 1200
// OutputCopy
// 1 2 1
// 9 3
// 6 5 4 3 2 1
// 0 0 2 1

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        while (n != 0)
        {
            printf("%d ", n % 10);
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}