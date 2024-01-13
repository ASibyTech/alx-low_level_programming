/**
 * _strncat - concatenates two strings with a specified length
 * @dest: the destination buffer
 * @src: the source string to append
 * @n: the maximum number of bytes from src to concatenate
 *
 * Return: a pointer to the concatenated string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; ++i)
        ;

    for (j = 0; src[j] != '\0' && j < n; ++j, ++i)
    {
        dest[i] = src[j];
    }

    dest[i] = '\0';

    return dest;
}
