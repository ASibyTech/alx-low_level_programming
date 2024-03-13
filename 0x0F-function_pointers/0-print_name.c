#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: Name to print.
 * @f: Pointer to a function that formats the name.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

