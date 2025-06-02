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
        bool is_diagonal_matrix = true;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j)
                {
                    if(arr[i][j] !=0){
                        is_diagonal_matrix = false;
                        printf("Not Diagonal matrix");
                    }   
                }
            }
        }

        if(is_diagonal_matrix){
            printf("diagonal matrix");
        }
    }


    return 0;
}