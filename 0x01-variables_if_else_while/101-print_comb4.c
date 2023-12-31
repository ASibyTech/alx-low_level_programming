#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int hundreds_digit = 0;

    while (hundreds_digit <= 7)
    {
        int tens_digit = hundreds_digit + 1;

        while (tens_digit <= 8)
        {
            int units_digit = tens_digit + 1;

            while (units_digit <= 9)
            {
                putchar(hundreds_digit + '0');
                putchar(tens_digit + '0');
                putchar(units_digit + '0');

                if (hundreds_digit < 7 || tens_digit < 8 || units_digit < 9)
                {
                    putchar(',');
                    putchar(' ');
                }

                units_digit++;
            }

            tens_digit++;
        }

        hundreds_digit++;
    }

    putchar('\n');  /* New line after printing the combinations */
    return 0;
}

