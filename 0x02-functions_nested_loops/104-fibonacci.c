#include <stdio.h>
#include <unistd.h>

#define SUCCESS 0

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    unsigned long a = 1, b = 2, next;

    printf("%lu, %lu, ", a, b);

    for (int i = 3; i <= 98; i++)
    {
        next = a + b;
        printf("%lu", next);

        if (i < 98)
            printf(", ");
        else
            printf("\n");

        a = b;
        b = next;
    }
}

/**
 * main - Entry point
 *
 * Return: SUCCESS
 */
int main(void)
{
    write(1, "Return SUCCESS\n", 15);
    print_fibonacci();

    return SUCCESS;
}

