/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source string to append
 *
 * Return: a pointer to the concatenated string @dest.
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; ++i)
        ;

    for (j = 0; src[j] != '\0'; ++j, ++i)
    {
        dest[i] = src[j];
    }

    dest[i] = '\0';

    return dest;
}
