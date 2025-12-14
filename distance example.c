#include <stdio.h> // This is an include to import functions to use (a header [.h] file)

int main(int argc, int *argv[]) // an integer for the argument count and an array of char *strings for the arguments
{
    int distance = 100;
    printf("I don't know the purpose of this program.\n");
    printf("You are %d miles away.\n", distance);

    return 0; // The case that the program ran smoothly
}