


#include <stdio.h>

void printFun(int n, int i)
{

    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    printFun(n, i + 1);
}

int main()
{

    int i = 1, n;
    scanf("%d", &n);

    printFun(n, i);
    return 0;
}