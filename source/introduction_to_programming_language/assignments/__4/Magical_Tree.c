

#include <stdio.h>

/*

       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************



*/
int main()
{
    int n;
    scanf("%d", &n);
    int space = 5;
    int line = 6;
    int star = 1;

    if (n == 1)
    {
        line = 6;
        space = 5;
    }
    else if (n == 3)
    {
        line = 7;
        space = 6;
    }
    else if (n == 5)
    {
        line = 8;
        space = 7;
    }
    else if (n == 7)
    {
        line = 9;
        space = 8;
    }
    else if (n == 9)
    {
        line = 10;
        space = 9;
    }
    else if (n == 11)
    {
        line = 11;
        space = 10;
    }
    else if (n == 13)
    {
        line = 12;
        space = 11;
    }
    else if (n == 15)
    {
        line = 13;
        space = 12;
    }
    else if (n == 17)
    {
        line = 14;
        space = 13;
    }
    else if (n == 19)
    {
        line = 15;
        space = 14;
    }
    else if (n == 21)
    {
        line = 16;
        space = 15;
    }

    
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int s = 1; s <= star; s++)
        {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }

    // =================
    int bottomStar = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int s = 1; s <= n; s++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
