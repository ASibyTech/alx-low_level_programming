#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated concatenated string
 *         NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1, len_s2, len_total, len_cpy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	len_total = len_s1 + n;

	result = malloc(len_total + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);

	len_cpy = n;
	strncat(result, s2, len_cpy);

	return (result);
}
