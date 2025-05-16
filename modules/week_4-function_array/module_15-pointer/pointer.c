

#include <stdio.h>

int main()
{
    int x = 10; 
    printf("%d \n", x);
    printf("%p \n", &x);


    int* pointerVariable = &x; 
     *pointerVariable = 800;


     printf("%d \n", x);


    
    return 0;
}
