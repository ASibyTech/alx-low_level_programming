#include <stddef.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to include in the prefix
 *
 * Return: number of bytes in the initial segment of @s which consist only
 * of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    while (*s && strchr(accept, *s))
    {
        ++count;
        ++s;
    }
    return count;
}
