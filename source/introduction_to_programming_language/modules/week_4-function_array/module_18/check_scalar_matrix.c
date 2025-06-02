#include <stdio.h>
#include <stdbool.h>

int main()

{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (r == c)
    {
        bool is_secondary_diagonal = true;
        bool is_scalar_matrix = true;
        int scalar_value = arr[0][r - 1]; // first row and last column value

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {

                // check is secondary diagonal
                if (i + j == r - 1)
                {

                    if (arr[i][j] != scalar_value)
                    {
                        is_scalar_matrix = false;
                    }
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        is_secondary_diagonal = false;
                        is_scalar_matrix = false;
                    }
                }
            }
        }

        if (is_secondary_diagonal && is_scalar_matrix)
        {
            printf("Scalar Matrix\n");
        }
        else
        {
            printf("Not Scalar Matrix\n");
        }
    }

    return 0;
}