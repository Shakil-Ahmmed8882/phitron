
#include <stdio.h>

// B. Even Numbers
// time limit per test: 1 second
// memory limit per test: 256 megabytes
// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
//
// Input
// Only one line containing a number N (1 <= N <= 10^3).
// Output
// Print the answer according to the required above. If there are no even numbers print -1.
// Examples
// InputCopy
// 10
// OutputCopy
// 2
// 4
// 6
// 8
// 10
// InputCopy
// 5
// OutputCopy
// 2
// 4
int main()
{
    int n; 
    scanf("%d", &n);
  
    if(n ==1){
        printf("-1\n");
    }

    for(int i = 1; i <=n; i++){
        if(i % 2 ==0){
            printf("%d\n", i);
        }
    }

    return 0;
}