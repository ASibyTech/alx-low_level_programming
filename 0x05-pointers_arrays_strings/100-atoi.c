#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    /* Handle signs */
    while (*s == '-' || *s == '+')
    {
        if (*s == '-')
            sign *= -1;

        s++;
    }

    /* Process digits */
    while (*s >= '0' && *s <= '9')
    {
        /* Check for overflow before updating the result */
        if (result > (INT_MAX - (*s - '0')) / 10)
            return (sign == 1 ? INT_MAX : INT_MIN);

        /* Update result */
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

