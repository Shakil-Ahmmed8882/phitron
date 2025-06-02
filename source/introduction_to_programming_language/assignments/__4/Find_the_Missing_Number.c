#include <stdio.h>

int main() {
    int numberOfTestCases;
    scanf("%d", &numberOfTestCases);
    
    while (numberOfTestCases--) {
        long long totalProduct, firstNumber, secondNumber, thirdNumber;
        scanf("%lld %lld %lld %lld", &totalProduct, &firstNumber, &secondNumber, &thirdNumber);
        
     
        long long productOfThreeNumbers = firstNumber * secondNumber * thirdNumber;
        
     
        if (totalProduct == 0) {
            printf("0\n");
            continue;
        }
        
     
        if (productOfThreeNumbers == 0) {
    
            if (totalProduct == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
            continue;
        }
        
     
        if (totalProduct % productOfThreeNumbers != 0) {
            printf("-1\n");
            continue;
        }
        
        long long calculatedMissingNumber = totalProduct / productOfThreeNumbers;
        
        
        printf("%lld\n", calculatedMissingNumber);
    }
    
    return 0;
}