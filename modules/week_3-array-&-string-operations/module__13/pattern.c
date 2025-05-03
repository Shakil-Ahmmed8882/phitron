
// #include <stdio.h>

// int main()
// {
//     int n,star=1; 
//     scanf("%d", &n);


//     for(int i = 1; i <= n; i++){ 
    

//         for(int j = 1; j <= star; j++){
//             printf("*");
//         }
        
//         printf("\n");
//         star++;

//     }

//     return 0;
// }




#include <stdio.h>

int main()
{
    int n,star; 
    scanf("%d", &n);
    star = n;


    for(int i = n; i >=0 ; i--){ 
    
        for(int j = star; j >= 0; j--){
            printf("*");
        }
        
        printf("\n");
        star--;

    }

    return 0;
}