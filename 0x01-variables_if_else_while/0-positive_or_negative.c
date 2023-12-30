#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 */


int main(void)
{
    int n;
    srand(time(NULL));

    n = rand() - RAND_MAX / 2;

    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n < 0) {
        printf("%d is negative\n", n);
    } else {
        printf("0 is zero\n");
    }

    return 0;
}
