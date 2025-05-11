
#include <stdio.h>


 void fun(int x){
    x = 200; 
    printf("fun fun address %p \n", &x);
 }



int main()
{
     int x = 60; 
    x = 20; 
    fun(x);
    //  printf("%d \n", x);
     printf("main fun address %p \n", &x);
    return 0;
}