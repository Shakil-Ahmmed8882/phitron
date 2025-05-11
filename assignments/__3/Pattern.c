

#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int star = 0;

    /// Uppper part for dimond pattern
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < space; j++)
        { // for space
            printf(" ");
        }
        for (int j = 0; j <= star; j++)
        { // for star
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
        star += 2;
    }

    /// Lower part for dimond pattern
    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < space; j++)
        { // for space
            printf(" ");
        }
        for (int j = 0; j <= star; j++)
        { // for star
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space++;
        star -= 2;
    }

    return 0;
}