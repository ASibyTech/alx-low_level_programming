#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 */


int main(void) {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number
    int n = rand();

    // Print the random number with positive/negative sign
    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n < 0) {
        printf("%d is negative\n", n);
    } else {
        printf("0 is zero\n");
    }

    return 0;
}

