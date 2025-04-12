#include <stdio.h>


int main() {

    /**
     * @brief Declaration of Variables of Different Data Types.
     *
     * This section declares three variables: `a` of type integer (`int`),
     * `b` of type single-precision floating-point (`float`), and `c` of
     * type character (`char`). These declarations allocate memory to store
     * values of the respective data types.
     *
     * Example Use Case: Preparing variables to store user input, data read
     * from a file, or values obtained through calculations.
     */
    int a;
    float b;
    char c;

    /**
     * @brief Reading Formatted Input from the User.
     *
     * This part uses the `scanf` function to read input from the standard
     * input (usually the keyboard). The format string `"%d %f %c"` specifies
     * that `scanf` should expect an integer, followed by a floating-point
     * number, and then a character, separated by whitespace. The `&` operator
     * is used to provide the memory addresses of the variables where the
     * input values will be stored.
     *
     * User Action: The user will be prompted to enter an integer, a float,
     * and a character, separated by spaces (e.g., "10 3.14 x").
     */
    scanf("%d %f %c", &a, &b, &c);
    // -------------

    /**
     * @brief Printing the Read Input Values.
     *
     * This section utilizes the `printf` function to display the values that
     * were read from the user and stored in the variables `a`, `b`, and `c`.
     * The format string `"%d\n %f\n %c"` specifies how each variable should
     * be printed: as an integer, a floating-point number, and a character,
     * each followed by a newline character (`\n`) for separate lines in the output.
     *
     * User Action: After the user provides input, the program will execute this line.
     * Output (based on the example input "10 3.14 x"):
     * 10
     * 3.140000
     * x
     */
    printf("%d\n %f\n %c", a,b,c);
    return 0;
}