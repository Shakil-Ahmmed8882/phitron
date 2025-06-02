
#include <stdio.h>


 void fun(int* p){
    *p = 900; 
 }



int main()
{
     int x = 60; 
    x = 20; 
    fun(&x);
    //  printf("%d \n", x);
     printf("%d \n", x);
    return 0;
}