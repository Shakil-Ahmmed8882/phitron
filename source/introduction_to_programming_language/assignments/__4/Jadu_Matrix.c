
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

    bool is_jadu_in_primary_diagonal = true;
    bool is_jadu_in_secondary_diagonal = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // primary diagonal check & zero out of the line
                if (i == j)
                {
                    if (arr[i][j] != 1)
                    {
                        is_jadu_in_primary_diagonal = false;
                    }
                }

                // secondary diagonal check & zero out of the line
                if (i + j == r - 1)
                {
                    if (arr[i][j] != 1)
                    {
                        is_jadu_in_secondary_diagonal = false;
                    }
                }

                if (i != j && (i + j != r - 1))
                {
                    if (arr[i][j] != 0)
                    {
                        is_jadu_in_primary_diagonal = false;
                        is_jadu_in_secondary_diagonal = false;
                    }
                }
            }
        }

        if (is_jadu_in_primary_diagonal && is_jadu_in_secondary_diagonal)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}