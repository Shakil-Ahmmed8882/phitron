

#include <stdio.h>



/**
 * 
 * Problem Statement:
 * 1. Take an integer `n` — the number of elements in an array.
 * 2. Take `n` integers as array input from the user.
 * 3. Take two more inputs:
 *      - `index`: position where a new number will be inserted
 *      - `value`: the number to insert
 * 4. Shift the existing elements from the index to the right to make space.
 * 5. Insert the new value at the given index.
 * 6. Print the updated array.
 * 
 * Example:
 * Input: 4 ⏎ 1 2 3 4 ⏎ 2 99
 * Output: 1 2 99 3 4
 */
int main()
{
    int n;
    scanf("%d", &n); 
    int arr[n + 1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);
    // Shift elements to the right from the index position
    for(int i = n; i >= index; i--){
        arr[i] = arr[i - 1];
    }
    arr[index] = value;

    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }

    


    return 0;
}
