#include <stdio.h>


/*
 * @brief Basic Output using printf with Escape Sequences.
 *
 * This commented-out section demonstrates the fundamental use of the `printf`
 * function to display text on the console. It showcases two common escape
 * sequences: `\n` for a newline, which moves the cursor to the next line,
 * and `\t` for a horizontal tab, which inserts a horizontal tab space.
 *
 * Example Use Case: Displaying simple messages or formatting output with
 * line breaks and indentation.
 * Output (if this section were executed):
 * Hello
 * wor		ld
 */


int main() {

    /**
     * @brief Declaration and Initialization of Different Data Types.
     *
     * This section declares and initializes variables of three fundamental
     * data types in C: `int` for integers, `float` for single-precision
     * floating-point numbers, and `char` for single characters. Each variable
     * is assigned a literal value of its respective type.
     *
     * Example Use Case: Storing different kinds of data for calculations,
     * representing measurements, or handling textual information.
     */
    int number_1 = 100;
    float number_2 = 1.2;
    char character = 'a';

    /**
     * @brief Formatted Output of a Floating-Point Number.
     *
     * This part uses the `printf` function with a format specifier `%.1f` to
     * display the value of the `number_2` variable. The `%.1f` format specifier
     * instructs `printf` to print a floating-point number with one digit after
     * the decimal point.
     *
     * User Action: The program executes this line.
     * Output: "1.2" (followed by no newline in this specific example) will be
     * printed to the standard output.
     */
    printf("%.1f",number_2);

    return 0;
}