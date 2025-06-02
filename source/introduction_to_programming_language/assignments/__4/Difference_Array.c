#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int A[n];
        int B[n];
        int C[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }

        // Copy to B
        for (int i = 0; i < n; i++)
        {
            B[i] = A[i];
        }
        // Sort B[]
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        // store differene to C array 
        for(int i = 0; i < n; i++){
            C[i] = abs(B[i] - A[i]);
        }





        for (int i = 0; i < n; i++)
        {
            printf("%d ", C[i]);
        }

        printf("\n");
    }

    return 0;
}