#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: set of characters to match
 *
 * Return: number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int match;
    char *original_accept = accept;

    while (*s)
    {
        match = 0;

        while (*accept)
        {
            if (*s == *accept)
            {
                count++;
                match = 1;
                break;
            }
            accept++;
        }

        if (match == 0)
            break;

        s++;
        accept = original_accept; /* Reset accept to the beginning */
    }

    return count;
}
