#include <stdio.h>
#include <string.h>

int main() {

    // take testCases number = 2 & assisn
    int testCases;
    scanf("%d", &testCases);


// Now we   loop on test cases : if 2 go back 2 1 
    while (testCases--) {
        // taking string and assigning 
        char s[10001];
        scanf("%s", s);
        
        int capitalCount = 0, smallCount = 0, digitCount = 0;
        int i = 0;
    
        // we know we will get the null character in the end of string 
        // we use it here loop untill a string finish 
        while (s[i] != '\0') {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                capitalCount++; 

            } else if (s[i] >= 'a' && s[i] <= 'z') {
                smallCount++;

            } else if (s[i] >= '0' && s[i] <= '9') {
                digitCount++;

            }
            i++;
        }
        
        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }
    return 0;
}
