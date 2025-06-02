

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    // int length= strlen(a);

    // for(int i = 0; i < length; i++){
    //     b[i] = a[i];
    // }

    strcpy(b, a);

    printf("%s %s", a, b);

    return 0;
}