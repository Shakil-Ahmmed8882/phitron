
#include <stdio.h>
/*


Problem Statement

You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

For example:

If the input is

6
10 20 30 40 50 60
You need to print 60 40 20 as their indexes are 5 3 1 respectively.

Input Format

First line will contain N.
Second line will contain the array A.
Constraints

1 <= N <= 10^5
1 <= A[i] <= 1000 ; where A[i] are the values of array A.
Output Format

Output the values of odd indexes in reverse way. Don't forget to put a space between two values.
Sample Input 0

5
10 20 30 40 50
Sample Output 0

40 20 
Sample Input 1

6
0 1 2 3 4 5
Sample Output 1

5 3 1 

*/
int main()
{

    int n;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int j = n -1; j > 0; j--)
    {
        if (j % 2 == 1 )
        {
            printf("%d ", A[j]);
        }
    }

    return 0;
}