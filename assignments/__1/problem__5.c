
#include <stdio.h>



/**
     * @brief Determines and prints the shopping outcomes based on the initial amount of money.
     *
     * This program simulates a shopping scenario where the user's decision to buy
     * a Punjabi determines if they and Alisa will buy shoes. The conditions for
     * each purchase are as follows:
     * 1. The user will buy a Punjabi if they have more than 1000 Taka. After
     * buying, their money is reduced by 1000.
     * 2. The user will buy shoes if they have 500 Taka or more remaining after
     * (potentially) buying the Punjabi.
     * 3. Alisa will buy shoes if and only if the user buys a pair of shoes.
     *
     * The program takes the initial amount of money (N) as input and prints the
     * corresponding events:
     * - "I will buy Punjabi" if the user buys a Punjabi.
     * - "I will buy new shoes" if the user buys shoes.
     * - "Alisa will buy new shoes" if Alisa buys shoes.
     * - "Bad luck!" if no one buys anything.
     *
     * Note that multiple events can occur, and each printed event is followed by a newline.
     *
     * Input Format:
     * The input consists of a single non-negative integer N, representing the
     * initial amount of money the user has.
     *
     * Constraints:
     * 1 <= N <= 2^31
     *
     * Output Format:
     * The program outputs the events that occur based on the initial amount N.
     * Each event is printed on a new line. If no purchases are made, "Bad luck!"
     * is printed.
     *
     * Sample Input 0:
     * 1000
     *
     * Sample Output 0:
     * Bad luck!
     *
     * Sample Input 1:
     * 1450
     *
     * Sample Output 1:
     * I will buy Punjabi
     *
     * Sample Input 2:
     * 1500
     *
     * Sample Output 2:
     * I will buy Punjabi
     * I will buy new shoes
     * Alisa will buy new shoes
     */
     int main() {

          int N = 0; 
          scanf("%d", &N);


          if(N > 1000){
               printf("I will buy Punjabi\n");
               N -= 1000; 
          
               if(N >= 500){
                    printf("I will buy new shoes\n");
                    printf("Alisa will buy new shoes\n");
               }

          } else{
               printf("Bad luck!\n");
          }

     }