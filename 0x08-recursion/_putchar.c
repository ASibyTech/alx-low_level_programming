#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 * Return: On success, the number of characters written (1).
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
