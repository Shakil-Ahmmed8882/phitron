#include <stdio.h>

int main()
{

    /**
     * @brief Declaration of an Integer Variable for Potential Use (Not Directly Controlling the While Loop).
     *
     * This section declares an integer variable `n`. Input is read into this
     * variable using `scanf`. However, in this specific program, the value of `n`
     * does not directly influence the execution or termination of the subsequent
     * `while` loop.
     *
     * Example Use Case: This variable might be intended for other parts of a
     * more extensive program or could be a remnant from a previous version of the code.
     */
    int n;
    scanf("%d", &n);

    /**
     * @brief Initialization of a Loop Counter and a Definite While Loop.
     *
     * This part initializes an integer variable `i` to 1. It then introduces a
     * `while` loop that will continue to execute as long as the condition `i <= 30`
     * is true. Inside the loop, the `printf` function is used to display the
     * string " ddf- " followed by the current value of `i` and a newline character.
     * After printing, the value of `i` is incremented by 1 using the `i++` statement.
     *
     * Loop Behavior & Output: The loop will iterate exactly 30 times, with `i`
     * taking values from 1 to 30. In each iteration, it will print the formatted
     * string to the console.
     *
     * Output:
     * ddf- 1'
     * ddf- 2'
     * ddf- 3'
     * ...
     * ddf- 30'
     */
    int i = 1;
    while ( i <= 30 )
    {
        printf(" ddf- %d'\n", i);

        i++;
    }

    return 0;
}