
#include <stdio.h>
// E. Max
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// Given a number N, and N numbers, find maximum number in these N numbers.
//
// Input
// First line contains a number N (1 <= N <= 10^3).
// Second line contains N numbers Xi (0 <= Xi <= 10^9).
// Output
// Print the maximum number.
// Example
// InputCopy
// 5
// 1 8 5 7 5
// OutputCopy
// 8
int main()
{
    
    int n;
    int x;
    int max = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &x);
        if(max < x){
            max = x;
        }
    }

    printf("%d\n", max);
    return 0;
}