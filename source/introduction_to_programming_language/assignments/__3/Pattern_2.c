

#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int numCount = 1;

    /// Uppper part for dimond pattern
    for (int i = 1; i <= n ; i++)
    {

        for (int j = 0; j < space; j++)
        { // for space
            printf(" ");
        }
        for (int j = i; j >0; j--)
        { // for number 
            printf("%d", j);
        }
        
        printf("\n");
        space--;
        numCount += 1;
    }

    

    return 0;
}