#include <stdio.h>


int main()
{

    /**
     * @brief Declaration of an Integer Variable for Loop Limit.
     *
     * This section declares an integer variable `n`. This variable will store
     * the upper limit provided by the user, which will determine how many
     * numbers are included in the subsequent summation.
     *
     * Example Use Case: Specifying the number of iterations in a loop or
     * defining the range for a calculation.
     */
    int n;

    /**
     * @brief Reading the Upper Limit from User Input.
     *
     * This part uses the `scanf` function to read an integer value from the
     * standard input (keyboard). The format specifier `"%d"` indicates that
     * an integer is expected. The `&n` provides the memory address of the
     * variable `n`, allowing `scanf` to store the user's input into it.
     *
     * User Action: The program will wait for the user to enter an integer and
     * press the Enter key.
     */
    scanf("%d", &n);

    /**
     * @brief Initialization of the Sum and Iterative Calculation.
     *
     * This section initializes an integer variable `sum` to 0. It then uses a
     * `for` loop to iterate from 1 up to and including the value of `n`. In
     * each iteration, the current value of the loop counter `i` is added to the
     * `sum` variable, effectively calculating the sum of integers from 1 to `n`.
     *
     * Example Use Case: Calculating the sum of a series of numbers, performing
     * cumulative calculations within a loop.
     */
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum = sum + i;
    };

    /**
     * @brief Printing the Calculated Sum.
     *
     * This part uses the `printf` function to display the final calculated
     * `sum` to the standard output. The format specifier `"%d"` is used to
     * print the integer value of `sum`. The text " - sum\n" is also included
     * in the output string to provide context, with `\n` adding a newline
     * character at the end.
     *
     * User Action: After the loop completes, the program executes this line.
     * Output (if the user entered '5'): "15 - sum\n" will be printed.
     */
    printf("%d - sum\n", sum);

    return 0;
}