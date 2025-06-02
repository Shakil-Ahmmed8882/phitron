
#include <stdio.h>

  /**
     * @brief Reads a non-negative integer N and checks if it is divisible by 3.
     *
     * This program takes a single non-negative integer N as input. The program
     * then determines if N is perfectly divisible by 3. If the remainder of the
     * division of N by 3 is 0, the program outputs "YES". Otherwise, if the
     * remainder is not 0, the program outputs "NO".
     *
     * Input Format:
     * The input consists of a single non-negative integer N on a single line.
     *
     * Constraints:
     * 0 <= N <= 10^9
     *
     * Output Format:
     * The program outputs either "YES" if N is divisible by 3, or "NO" otherwise.
     * The output is printed to the standard output without any quotation marks.
     *
     * Sample Input 0:
     * 33
     *
     * Sample Output 0:
     * YES
     *
     * Sample Input 1:
     * 29
     *
     * Sample Output 1:
     * NO
     *
     * Sample Input 2:
     * 0
     *
     * Sample Output 2:
     * YES
     */

     int main() {

         int N;
         scanf("%d", &N); 

         if(N % 3 == 0){
             printf("YES\n");
         }else {
            printf("NO\n");
         }

     }