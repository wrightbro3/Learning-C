#include <stdio.h>
/*
 * Includes the C standard input/output library.
 * This gives us access to functions like:
 *   - puts
 *   - printf
 *   - fputs
 * and the predefined stream 'stdout'.
 */

int main(void)
/*
 * Defines the program’s entry point.
 * - 'int' means the program returns an integer exit status to the OS.
 * - 'main' is the function the OS calls when the program starts.
 * - '(void)' means this function takes no arguments.
 */
{
    puts("Hello, World");
    /*
     * Calls the C standard library function 'puts'.
     * - Writes the string "Hello, World" to standard output (stdout).
     * - Automatically appends a newline character '\n'.
     * - Uses buffered I/O (unlike write).
     */

    return 0;
    /*
     * Ends the program and returns control to the operating system.
     * - A return value of 0 signals successful execution.
     * - Non-zero values indicate an error.
     */
}
