#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int tens_digit = 0;

    while (tens_digit <= 8)
    {
        int units_digit = tens_digit + 1;

        while (units_digit <= 9)
        {
            putchar(tens_digit + '0');
            putchar(units_digit + '0');

            if (tens_digit < 8 || units_digit < 9)
            {
                putchar(',');
                putchar(' ');
            }

            units_digit++;
        }

        tens_digit++;
    }

    putchar('\n');  /* New line after printing the combinations */
    return 0;
}

