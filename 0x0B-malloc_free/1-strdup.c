#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 *         NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
    char *dup_str;
    unsigned int length = 0, i;

    if (str == NULL)
    {
        return (NULL);
    }
    while (str[length])
    {
        length++;
    }
    /* Allocate memory for the duplicated string */
    dup_str = malloc((length + 1) * sizeof(char));
    if (dup_str == NULL)
    {
        return (NULL);
    }
    for (i = 0; i <= length; i++)
    {
        dup_str[i] = str[i];
    }
    return (dup_str);
}
