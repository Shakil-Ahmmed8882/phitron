
#include <stdio.h>

int main()
{
    char s[50];
    fgets(s,4, stdin);
    printf("%s ", s);

    return 0;
}