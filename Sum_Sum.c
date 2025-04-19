
#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
    int arr[n]; 
    int sumOfPositveNumber =0;
    int sumOfNegetiveNumber =0;

    for(int i =0; i <n  ; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > 0){
            sumOfPositveNumber += arr[i];
        }else{
            sumOfNegetiveNumber += arr[i];
        }
    }

    printf("%d %d", sumOfPositveNumber,sumOfNegetiveNumber);





    return 0;
}