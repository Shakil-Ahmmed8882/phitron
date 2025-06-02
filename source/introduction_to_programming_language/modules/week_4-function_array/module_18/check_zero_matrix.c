
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
    
    int total_values = r * c; 
    int zero_count = 0;
    
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(arr[i][j] == 0){
                    zero_count++; 
                }
            }
        }

       if(total_values == zero_count){
           printf("Zero Matrix");
       }
       else{
           printf("Not Zero Matrix");
       }


    

    return 0;
}