
#include <stdio.h>



void string(char s[]){

    int x = strlen(s);
    printf("%s\n", s);
    printf("%d", x);

}

int main()
{
    char s[10]; 
    scanf("%s", &s);
string(s);

    return 0;
}