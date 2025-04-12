#include <stdalign.h>
#include <stdbool.h>


int main() {

    /**
     * @brief Declaration and Initialization of a Boolean Variable.
     *
     * This section demonstrates how to declare a variable of the boolean type
     * (`bool`) and initialize it with a false value. Boolean variables are
     * fundamental for representing truth values in programming, often used
     * in conditional statements and logical operations.
     *
     * Example Use Case: Representing the state of a switch (on/off), a flag
     * indicating completion, or the result of a comparison.
     */
    bool b;
    b = false;


    /**
     * @brief Printing the Value of the Boolean Variable.
     *
     * This part utilizes the `printf` function from the standard input/output
     * library to display the current value of the boolean variable `b` to the
     * console. The `%d` format specifier is used to print the integer
     * representation of the boolean value (0 for false, typically 1 for true).
     *
     * User Action: The program executes this line.
     * Output: "0" (followed by a newline character) will be printed to the standard output.
     */
    printf("%d\n", b);
    return 0;
}