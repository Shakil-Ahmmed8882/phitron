#include <stdio.h>

void printFun(int n, int i)
{
    if (n == 0)
        return;

    printf("%d", i);
    if (n > 1)
        printf(" ");

    printFun(n - 1, i - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printFun(n, n);
    return 0;
}
