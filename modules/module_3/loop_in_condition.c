#include <stdio.h>

int main()
{

    /**
     * @brief Declaration of an Integer Variable for Potential Use (Not Directly Used in Loop).
     *
     * This section declares an integer variable `n`. Although input is read into
     * this variable using `scanf`, it's not directly used within the subsequent
     * `for` loop or its conditional statement in this particular program.
     *
     * Example Use Case: This variable could have been intended to control the
     * loop's behavior or be used in other parts of a larger program.
     */
    int n;
    scanf("%d", &n);

    /**
     * @brief Loop with a Break Condition.
     *
     * This `for` loop is designed to iterate 10 times, with the loop counter
     * `i` ranging from 1 to 10. Inside the loop, there's a conditional `if`
     * statement that checks if the value of `i` is equal to 5. If it is, the
     * `break` statement is executed, which immediately terminates the loop.
     * Before the potential break, the `printf` function is called to print a
     * formatted string along with the current value of `i`.
     *
     * Loop Behavior & Output: The loop will print " ddf- " followed by the
     * value of `i` and a newline character for each iteration until `i` becomes
     * 5. At that point, the `break` statement will stop the loop, and the
     * remaining iterations (for i = 6 to 10) will not be executed.
     *
     * Output:
     * ddf- 1'
     * ddf- 2'
     * ddf- 3'
     * ddf- 4'
     */
    for (int i = 1; i <= 10; i++)
    {
        if(i == 5)
            break;
        printf(" show- %d'\n", i);

    }

    return 0;
}