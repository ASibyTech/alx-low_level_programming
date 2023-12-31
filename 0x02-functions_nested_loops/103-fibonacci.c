#include <stdio.h>

int main(void)
{
    long int a = 1, b = 2, next_term, sum = 0;

    while (a <= 4000000)
    {
        if (a % 2 == 0)
            sum += a;

        next_term = a + b;
        a = b;
        b = next_term;
    }

    printf("Sum of even-valued terms in the Fibonacci sequence: %ld\n", sum);

    return 0;
}

