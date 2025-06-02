
#include <stdio.h>




void sum(int a, int b){    
    printf("%d", a + b);

}




int main()
{
    int a; // 8
    int b; // 12

    scanf("%d %d", &a, &b); // store them in a and b
    sum(a, b);     
    return 0;
}