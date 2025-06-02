

#include <stdio.h>




/**
 * Problem Statement:
 * 1. Read an integer `n` – the number of elements in the array.
 * 2. Take `n` integers as input and store them in the array.
 * 3. Take one more input `index` – the position from which the element should be removed.
 * 4. Shift the remaining elements one step to the left, starting from that index.
 * 5. Reduce the total count `n` by 1, as one element is removed.
 * 6. Print the updated array.
 * 
 * Example:
 * Input: 5 ⏎ 10 20 30 40 50 ⏎ 2  
 * Output: 10 20 40 50  
 * (Element at index 2, which is 30, is removed.)
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

    int index;
    scanf("%d", &index);


    for(int i = index; i < n-1;i++){
        arr[i] =  arr[i+1];
    }
    n--;
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}