#include <stdio.h>


int main() {

    /**
     * @brief Declaration and Initialization of a Long Long Integer.
     *
     * This section declares a variable `a` of type `long long int`, which is
     * used to store very large integer values. It is initialized with the
     * value 1000000000999, demonstrating its capacity to hold numbers
     * beyond the range of a regular `int`.
     *
     * Example Use Case: Storing large counts, unique identifiers, or results
     * of computations that might exceed the standard integer limits.
     */
    long long int a = 1000000000999;

    /**
     * @brief Printing a Long Long Integer.
     *
     * This part uses the `printf` function to display the value stored in the
     * `long long int` variable `a`. The format specifier `"%lld"` is crucial
     * here, as it correctly handles the output of `long long int` values. The
     * `\n` at the end ensures that a newline character is printed after the
     * number.
     *
     * User Action: The program executes this line.
     * Output: "1000000000999" (followed by a newline character) will be
     * printed to the standard output.
     */
    printf("%lld\n", a);
    return 0;
}