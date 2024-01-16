#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *@s1: the first string.
 @s2: the second string.
 *
 * return: a pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *cct_str;
	unsigned int L_s1 = 0, L_s2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[L_s1])
		L_s1++;

	while (s2[L_s2])
                L_s2++;

	cct_str = malloc((L_s1 + L_s2 + 1) * sizeof(char));
	if (cct_str == NULL)
		return (NULL);
	
	for (i = 0; i < L_s1; i++)
		cct_str[i] = s1[i];
	for (j = 0; j < L_s2; i++, j++)
                cct_str[i] = s2[j];

	cct_str[i] = '\0';

	return (cct_str);

}
