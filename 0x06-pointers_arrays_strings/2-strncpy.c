#include "main.h"

/**
 * _strncpy - Copies at most n 
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
		return (dest);
}
