#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 * Return: 1 if it's a digit, 0 otherwise.
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 */
void _multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result, carry, product;

    while (num1[len1] != '\0')
        len1++;
    while (num2[len2] != '\0')
        len2++;

    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            result[i + j + 1] = product % 10;
            carry = product / 10;
        }
        result[i + j + 1] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
        printf("%d", result[i]);
    printf("\n");

    free(result);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !(_isdigit(*argv[1]) && _isdigit(*argv[2])))
    {
        printf("Error\n");
        return 98;
    }

    _multiply(argv[1], argv[2]);

    return 0;
}

