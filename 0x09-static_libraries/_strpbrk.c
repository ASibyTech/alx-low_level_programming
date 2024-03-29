#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the byte in @s that matches one of the bytes in @accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        if (strchr(accept, *s))
            return s;
        ++s;
    }
    return NULL;
}
