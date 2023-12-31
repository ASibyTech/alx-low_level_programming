#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1_tens, num1_units, num2_tens, num2_units;

    for (num1_tens = 0; num1_tens <= 9; num1_tens++)
    {
        for (num1_units = 0; num1_units <= 9; num1_units++)
        {
            for (num2_tens = num1_tens; num2_tens <= 9; num2_tens++)
            {
                for (num2_units = (num2_tens == num1_tens) ? num1_units + 1 : 0; num2_units <= 9; num2_units++)
                {
                    putchar(num1_tens + '0');
                    putchar(num1_units + '0');
                    putchar(' ');
                    putchar(num2_tens + '0');
                    putchar(num2_units + '0');

                    if (num1_tens != 9 || num1_units != 8 || num2_tens != 9 || num2_units != 9)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');  /* New line after printing the combinations */
    return 0;
}

