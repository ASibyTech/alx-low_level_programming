#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL
 * if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *pattern = needle;

        /* Check for a substring match */
        while (*haystack && *pattern && (*haystack == *pattern))
        {
            haystack++;
            pattern++;
        }

        /* If the substring is found, return the starting address */
        if (!*pattern)
            return start;

        /* If the substring is not found, reset to the next character in haystack */
        haystack = start + 1;
    }

    return NULL; /* Substring not found */
}
