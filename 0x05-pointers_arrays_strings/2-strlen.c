#include <stdio.h>
/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
