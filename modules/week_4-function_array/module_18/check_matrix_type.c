
#include <stdio.h>

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

    if (r == 1 && c != 1)
    {
        printf("Row matrix\n");
    }
    else if (c == 1 && r != 1)
    {
        printf("Column matrix\n");
    }
    else if (r == c)
    {
        printf("Square matrix\n");
    }
    else
    {
        printf("Rectangular matrix\n");
    }

    return 0;
}