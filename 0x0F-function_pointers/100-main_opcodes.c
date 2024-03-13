#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int i, bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    unsigned char *address = (unsigned char *)main;

    for (i = 0; i < bytes; i++)
    {
        printf("%02x", *(address + i));
        if (i < bytes - 1)
            printf(" ");
    }
    printf("\n");

    return (0);
}

