





#include <stdio.h>



/*

        *
       **
      ***
     ****
    *****
   ******
  *******
 ********

*/

int main()
{
    int n,star, space; 
    scanf("%d", &n);
    star = 0;
    space = n  - 1;


    for(int i = 0; i < n  ; i++){ // for printing rows/lines
    

        for(int j = space; j >= 0; j--){ // for printing space
            printf(" "); 
        }
        for(int j = 0; j <= star; j++){ // for printing stars
            printf("*");
        }

        star += 1;
        space--;
        printf("\n");

    }

    return 0;
}