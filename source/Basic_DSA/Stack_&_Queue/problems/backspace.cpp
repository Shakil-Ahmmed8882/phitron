/*
844. Backspace String Compare

Difficulty: Easy

Problem:
Given two strings s and t, return true if they are equal when both are typed into 
empty text editors. '#' means a backspace character.

Note:
- Typing '#' deletes the character before it.
- If there is no character before '#', it does nothing (text remains empty).

Examples:

Example 1:
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: 
- s becomes "ac"
- t becomes "ac"
- So, they are equal

Example 2:
Input: s = "ab##", t = "c#d#"
Output: true
Explanation:
- s becomes ""
- t becomes ""
- So, they are equal

Example 3:
Input: s = "a#c", t = "b"
Output: false
Explanation:
- s becomes "c"
- t becomes "b"
- So, they are not equal

Constraints:
- 1 <= s.length, t.length <= 200
- s and t only contain lowercase letters and '#' characters

Follow-up:
Can you solve it in O(n) time and O(1) space?
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void processString(const char* input, char* output) {
    int j = 0;
    for (int i = 0; input[i]; i++) {
        if (input[i] == '#') {
            if (j > 0) j--;
        } else {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';
}

bool backspaceCompare(const char* s, const char* t) {
    char processedS[201], processedT[201];
    processString(s, processedS);
    processString(t, processedT);
    return strcmp(processedS, processedT) == 0;
}

int main() {
    backspaceCompare("ab#c", "ad#c");
    backspaceCompare("ab##", "c#d#");
    backspaceCompare("a#c", "b");
    return 0;
}
