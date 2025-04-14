#include <stdio.h>

// Problem: Given a letter X.
// Description: If the letter is lowercase print the letter after converting it from
//              lowercase letter to uppercase letter. Otherwise print the letter after
//              converting it from uppercase letter to lowercase letter.
// Note : difference between 'a' and 'A' in ASCII is 32 .
//
// Input:
// Only one line containing a character X which will be a capital or small letter.
//
// Output:
// Print the answer to this problem.
//
// Examples:
// Input:
// a
// Output:
// A
//
// Input:
// A
// Output:
// a
int main()
{
    
    char ch; 
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32; 
        printf("%c", ch);
    }else{
        ch = ch + 32; 
        printf("%c", ch);
    }

    return 0;
}