#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar(digit++ + '0');
    }

    putchar('\n');  /* New line after printing the numbers */
    return 0;
}

