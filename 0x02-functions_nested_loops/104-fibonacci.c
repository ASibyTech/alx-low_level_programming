#include <stdio.h>

int main(void)
{
    unsigned long int fib1 = 1, fib2 = 2, nextTerm;

    printf("%lu, %lu", fib1, fib2);

    for (int i = 3; i <= 98; i++)
    {
        nextTerm = fib1 + fib2;
        printf(", %lu", nextTerm);

        fib1 = fib2;
        fib2 = nextTerm;
    }

    printf("\n");

    return 0;
}

