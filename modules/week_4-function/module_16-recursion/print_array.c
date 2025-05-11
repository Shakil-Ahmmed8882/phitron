
#include <stdio.h>

void print_array(int i,int n) {

    if(i == n + 1) return;
    print_array(i+1,n);
    printf("I love Recursion\n");
}

int main()
{

    int n; 
    scanf("%d", &n);
    int i = 1; 
    
    print_array(i, n);
    return 0;
}