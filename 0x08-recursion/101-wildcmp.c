#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings with possible wildcard '*'.
 * @s1: The first string.
 * @s2: The second string with possible wildcard '*'.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')  /* If both strings are at the end, they are identical */
		return 1;

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')  /* If s2 has '*' and s1 is at the end, check the next character in s2 */
		return 0;

	if (*s2 == '*' || *s1 == *s2)  /* If characters match or s2 has '*', proceed with the next characters in both strings */
		return wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);

	return 0;  /* If characters do not match and s2 does not have '*', strings are not identical */
}

