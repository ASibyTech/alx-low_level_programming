#include <stddef.h>

/**
 * _memcpy - copies memory area from source to destination
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy
 *
 * Return: a pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; ++i)
    {
        dest[i] = src[i];
    }

    return dest;
}
