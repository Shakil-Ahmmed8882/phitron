
#include <stdio.h>


 /**
     * @brief Reads two integers from the input and prints their product.
     *
     * This program takes two integer inputs, A and B, within the range of
     * -10^9 to 10^9 (inclusive). It then calculates the product of these
     * two integers and prints the result to the standard output. Due to the
     * potential size of the product (up to 10^18), a 64-bit integer type
     * (long long int) is used to store the result to avoid overflow.
     *
     * Input Format:
     * The input consists of two integers, A and B, separated by whitespace
     * on a single line.
     *
     * Constraints:
     * -10^9 <= A <= 10^9
     * -10^9 <= B <= 10^9
     *
     * Output Format:
     * The program outputs a single line containing the product of A and B.
     *
     * Sample Input 0:
     * 10 50
     *
     * Sample Output 0:
     * 500
     *
     * Sample Input 1:
     * 10000000 10000000
     *
     * Sample Output 1:
     * 100000000000000
     *
     * Sample Input 2:
     * -100 62
     *
     * Sample Output 2:
     * -6200
     */



     int main() {

         long long int A ;
         long long int B;
         scanf("%lld %lld", &A, &B); 

         printf("%lld ", A * B);
     }