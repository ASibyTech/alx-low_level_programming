#include <unistd.h>
#include "main.h"

/**
 * _puts - writes a string to the standard output (stdout)
 * @s: the string to write
 */
void _puts(char *s)
{
    write(1, s, _strlen(s));
    write(1, "\n", 1);
}
