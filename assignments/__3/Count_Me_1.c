
#include <stdio.h>
/*
Problem: A. Theatre Square
time limit per test: 1 second
memory limit per test: 256 megabytes
input
n, m, a (1 <= n, m, a <= 10^9)
output
Print the number of flagstones needed to pave the Theatre Square.

Examples
Input
6 6 4
Output
4
*/
int main()
{
    int n;
    scanf("%d", &n);
    int integerArray[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &integerArray[i]);
    }

    int count2 = 0; 
    int count3 = 0; 
    for (int i = 0; i < n; i++)
    {
        if(integerArray[i] % 2 == 0){
            count2++;
        }else if(integerArray[i] % 3 == 0){
            count3++;
        }
    }
    
    printf("%d %d", count2, count3);


    return 0;
}