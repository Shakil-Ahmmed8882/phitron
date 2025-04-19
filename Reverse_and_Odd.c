
#include <stdio.h>

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