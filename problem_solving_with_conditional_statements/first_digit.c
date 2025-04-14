
#include <stdio.h>
// Problem P: First digit !
// Time Limit: 0.25 seconds
// Memory Limit: 64 megabytes
//
// Description:
// Given a number X. Print "EVEN" if the first digit of X is an even number.
// Otherwise print "ODD".
// For example: In 4569 the first digit is 4, the second digit is 5,
// the third digit is 6 and the fourth digit is 9.
//
// Input:
// Only one line containing a number X (999 < X <= 9999)
//
// Output:
// If the first digit is even print "EVEN" otherwise print "ODD".
//
// Examples:
// Input:
// 4569
// Output:
// EVEN
//
// Input:
// 3569
// Output:
// ODD
//
// Note:
// Second Example :
// In 3569 the first digit is 3 and its ODD.
int main()
{
     int n;
     scanf("%d", &n);
     const firstDigit = n/1000;
     
     if(firstDigit % 2 == 0){
         printf("EVEN\n");
     }else{
         printf("ODD\n");
     }

    return 0;
}