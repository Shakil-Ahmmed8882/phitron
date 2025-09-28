#include <stdio.h>

void print_array(int i) {

    if(i == 4) return;
    print_array(i+1);
    printf("%d\n", i);
}

int main()
{

    print_array(1);
    return 0;
}