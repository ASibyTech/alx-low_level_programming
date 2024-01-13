/**
 * _strcpy - copies a string from source to destination
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    
    dest[i] = '\0';
    return dest;
}
