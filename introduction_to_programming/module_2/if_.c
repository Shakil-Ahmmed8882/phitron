#include <stdio.h>

int main() {

    /**
     * @brief Declaration of an Integer Variable for User Input.
     *
     * This section declares an integer variable named `tk`. This variable is
     * intended to store an integer value that will be provided by the user
     * as input to the program.
     *
     * Example Use Case: Holding a quantity, a choice from a menu, or a numerical
     * value for comparison or calculation.
     */
    int tk;

    /**
     * @brief Reading Integer Input from the User.
     *
     * This part uses the `scanf` function to read an integer value from the
     * standard input (typically the keyboard). The format specifier `"%d"`
     * indicates that `scanf` expects an integer. The `&` operator before `tk`
     * provides the memory address of the `tk` variable, allowing `scanf` to
     * store the entered integer directly into it.
     *
     * User Action: The program will pause and wait for the user to type an
     * integer and press the Enter key.
     */
    scanf("%d", & tk);

    /**
     * @brief Conditional Execution Based on User Input.
     *
     * This section implements an `if-else` statement to check the value of the
     * `tk` variable. If the value of `tk` is exactly equal to 5, the code block
     * within the `if` statement is executed, printing "a == 5" followed by a
     * newline. Otherwise, if the condition `tk == 5` is false, the code block
     * within the `else` statement is executed, printing "not === 5" followed by
     * a newline.
     *
     * User Action & Output:
     * - If the user enters '5': "a == 5\n" will be printed.
     * - If the user enters any other integer (e.g., 10, -3, 0): "not === 5\n"
     * will be printed.
     */
    if (tk == 5) {
        printf("a == 5\n");
    } else {
        printf("not === 5\n");
    }
    return 0;
}