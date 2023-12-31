#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char digit = '0';

    while (digit <= '9')
    {
        putchar(digit++);
    }

    digit = 'a';

    while (digit <= 'f')
    {
        putchar(digit++);
    }

    putchar('\n');  /* New line after printing the hexadecimal numbers */
    return 0;
}

