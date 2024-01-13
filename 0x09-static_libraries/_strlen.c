#include <stddef.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of the string @s.
 */
int _strlen(char *s)
{
    int count = 0;

    while (s[count] != '\0')
    {
        count++;
    }

    return count;
}
