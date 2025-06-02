

#include <stdio.h>




/**
 * Problem Statement:
 * 1. Take an integer `n` as input — total number of elements in the array.
 * 2. Take `n` integers as array input from the user.
 * 3. Swap the first element with the last, second with second last, and so on to reverse the array.
 * 4. Print the reversed array.
 * 
 * Example:
 * Input: 5 ⏎ 1 2 3 4 5  
 * Output: 5 4 3 2 1  
 * (All positions are flipped — first becomes last and vice versa.)
 */

int main()
{
    int n; 
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 0;
    int j = n - 1; 


    for(int i = 0, j = n-1; i <j; i++, j--){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    // while (i <= j)
    // {
    //     int tmp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = tmp;
    //     i++;
    //     j--;
    // }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}