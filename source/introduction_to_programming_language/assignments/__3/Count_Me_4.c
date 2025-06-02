#include <stdio.h>

int main() {

    // take string and asign it 
    char s[10001];
    scanf("%s", s);
    // array with 0 [0, 0 , 0 , 0, 0  ]
    // frequency array
    int fre[26] = {0};

    // going trough each character untill string gets finished \0
    // taking the value from string array 
    // use it as the fre[index] : index 
    // and save that value count into that postion 
    for (int i = 0; s[i] != '\0'; i++) {
        fre[s[i] - 'a']++;
    }

    // same logic .. 
    for (int i = 0; i < 26; i++) {
        if (fre[i] > 0) {
            printf("%c - %d\n", i + 'a', fre[i]);
        }
    }

    return 0;
}
