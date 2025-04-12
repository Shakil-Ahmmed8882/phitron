
#include <stdio.h>
/**
     * @brief Reads a non-negative integer N and prints all numbers from 1 to N
     * that are divisible by both 3 and 7.
     *
     * This program takes a single non-negative integer N as input. It then
     * iterates through all the numbers from 1 to N (inclusive). For each number,
     * it checks if the number is divisible by both 3 and 7. A number is divisible
     * by both 3 and 7 if it is divisible by their least common multiple, which is 21.
     * If a number satisfies this condition, it is printed to the standard output,
     * followed by a newline character.
     *
     * Input Format:
     * The input consists of a single non-negative integer N on a single line.
     *
     * Constraints:
     * 21 <= N <= 10000
     *
     * Output Format:
     * The program outputs all numbers from 1 to N that are divisible by both 3 and 7.
     * Each number is printed on a new line.
     *
     * Sample Input 0:
     * 30
     *
     * Sample Output 0:
     * 21
     *
     * Sample Input 1:
     * 50
     *
     * Sample Output 1:
     * 21
     * 42
     *
     * Sample Input 2:
     * 100
     *
     * Sample Output 2:
     * 21
     * 42
     * 63
     * 84
     */

     int main() {

         int N;
         scanf("%d", &N); 

        for(int i = 1; i <= N; i++){
            if(i % 3 == 0 && i % 7 == 0){
                printf("%d\n", i);
            }
        }

     }