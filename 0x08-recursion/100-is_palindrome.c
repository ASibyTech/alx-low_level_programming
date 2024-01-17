#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Helper function to check for palindrome recursively.
 * @s: The string to check.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
