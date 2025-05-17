#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    /**
     * Why this? We need to get the dimensions (number of rows and columns)
     * of the 2D array from the user. This determines the size of the array
     * we'll be working with. For example, if the user enters '3 4', it means
     * we'll create a 3x4 grid to store numbers.
     */
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    /**
     * Why this? This part is designed to print out all the elements present
     * in the very last row of the 2D array. Imagine the array like a table;
     * this loop specifically goes to the bottom-most row and displays each
     * number in that row, separated by spaces.
     */
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == r - 1)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");

    /**
     * Why this? Here, the goal is to print all the elements that are in the
     * rightmost column of the 2D array. Think of it as picking out the numbers
     * that are in the last vertical line of our table. Each number from this
     * last column will be printed, followed by a space.
     */
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j == c - 1)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}