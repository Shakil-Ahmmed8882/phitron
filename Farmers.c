#include <stdio.h>

int main()
{

    // first taking the number of test cases 
    int testCases;
    scanf("%d", &testCases);


    while (testCases--)
    {
        // taking variable for : ...
        int initialFarmers,
            additionalFarmers, initialDays;
        // and assigning the value into it 
        scanf("%d %d %d", &initialFarmers, &additionalFarmers, &initialDays);

        // 10 * 15 == 150 
        // 10 + 5 = 15 
        // 150 / 15 = 10 
        // 15 - 10 = 10 (we are substracting newly needed time from the initial needed time to get the saved time )
        int newDays = (initialFarmers * 
            initialDays) / (initialFarmers + additionalFarmers);

        printf("%d\n", initialDays - newDays);
    }
    return 0;
}
