
#include <stdio.h>

int main()
{
      
    int a = 50;
    int b =100;
    int tmp; 
    tmp= a;

    a = b ;
    b = tmp ;

    printf("a = %d, b = %d\n", a, b); // Output: a = 100, b = 100

    return 0;
}