#include <stdlib.h>

/**
 *str_concat - concatenates two strings.
 *@s1: the first string.
 *@s2: the second string.
 *
 * Return: A pointer to the concatenated string.
 *         NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int L_s1 = 0, L_s2 = 0, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[L_s1])
	{
		L_s1++;
	}

	/* Calculate the length of s2 */
	while (s2[L_s2])
	{
		L_s2++;
	}
	/* Allocate memory for the concatenated string */
	concat_str = malloc((L_s1 + L_s2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < L_s1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < L_s2; i++, j++)
	{
		concat_str[i] = s2[j];
	}

	concat_str[i] = '\0';

	return (concat_str);

}

