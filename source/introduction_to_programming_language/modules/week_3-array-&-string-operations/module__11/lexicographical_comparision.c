

#include <stdio.h>

int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", &a, &b);

    int val = strcmp(a,b);
    printf("%d", val);


    // Write the manual code of strcmp(a,b);


    return 0;
}