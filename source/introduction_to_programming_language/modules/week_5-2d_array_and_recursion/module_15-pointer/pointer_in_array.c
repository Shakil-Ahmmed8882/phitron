
#include <stdio.h>



void fun(int a[], int n) {
    

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

int main()
{
    //  int a[5] = {1, 2, 3, 4, 5};

    // //  *(a + 2) = 100;
    //  fun(a);

    //  for(int i = 0; i < 5; i++){
    //      printf("%d ", a[i]);
    //  }
    //  printf("%p \n", &a[0]);
    //  printf("%p \n", a);


    int n; 
    scanf("%d", &n);
    int arr[n];
    

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    fun(arr, n);

    return 0;
}