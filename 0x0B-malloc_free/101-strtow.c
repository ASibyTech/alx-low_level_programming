#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 *         The last element of the array is NULL.
 *         Returns NULL if str == NULL or str == "" or if memory allocation fails.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, word_count, len, start, end;

    /* Check for invalid input */
    if (str == NULL || *str == '\0')
        return (NULL);

    /* Count the number of words in the string */
    for (i = 0, word_count = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            word_count++;
    }

    /* Allocate memory for the array of words */
    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    /* Extract words from the string and store them in the array */
    for (i = 0, j = 0; j < word_count; i++)
    {
        if (str[i] != ' ')
        {
            start = i;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
            end = i - 1;

            /* Allocate memory for each word */
            len = end - start + 1;
            words[j] = malloc((len + 1) * sizeof(char));
            if (words[j] == NULL)
            {
                /* Free allocated memory on failure */
                for (k = 0; k < j; k++)
                    free(words[k]);
                free(words);
                return (NULL);
            }

            /* Copy the word to the array */
            for (k = 0; start <= end; k++, start++)
                words[j][k] = str[start];
            words[j][k] = '\0'; /* Null-terminate the word */
            j++;
        }
    }

    words[word_count] = NULL; /* Set the last element to NULL */

    return (words);
}

