/**
 * _strncpy - copies a specified number of bytes from source to destination
 * @dest: the destination buffer
 * @src: the source string
 * @n: the number of bytes to copy
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; ++i)
    {
        dest[i] = src[i];
    }

    for (; i < n; ++i)
    {
        dest[i] = '\0';
    }

    return dest;
}
