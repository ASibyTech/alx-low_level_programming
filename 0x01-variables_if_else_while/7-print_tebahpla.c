#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'z';

    while (letter >= 'a')
    {
        putchar(letter--);
    }

    putchar('\n');  /* New line after printing the reversed alphabet */
    return 0;
}

