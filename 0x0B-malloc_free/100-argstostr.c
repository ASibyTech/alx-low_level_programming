#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to a new string containing the concatenated arguments.
 *         NULL if ac == 0 or av == NULL or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
    char *concat_str;
    int i, j, k, len = 0;
    /* Check for invalid arguments */
    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }
    /* Calculate the total length of the concatenated string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            len++;
        }
        len++; /* Add 1 for newline character */
    }
    /* Allocate memory for the concatenated string */
    concat_str = malloc((len + 1) * sizeof(char));
    if (concat_str == NULL)
    {
        return (NULL);
    }
    /* Copy each argument to the concatenated string */
    for (i = 0, k = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++, k++)
        {
            concat_str[k] = av[i][j];
        }
        concat_str[k] = '\n';
        k++;
    }
    concat_str[k] = '\0';
    return (concat_str);
}

