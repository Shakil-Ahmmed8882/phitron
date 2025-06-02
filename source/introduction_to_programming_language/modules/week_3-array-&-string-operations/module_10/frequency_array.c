
#include <stdio.h>

int main()
{

    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    int frequency[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        int value = arr[i];
        frequency[value]++;
    }

for (int i = 0; i < 5; i++)
{
    printf(" %d: -> %d\n", i, frequency[i] );
}

    





    return 0;
}