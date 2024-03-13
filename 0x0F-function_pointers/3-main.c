#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 if wrong number of arguments,
 *         99 if the operator is none of the above,
 *         100 if trying to divide by 0
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
    {
        printf("Error\n");
        return (100);
    }

    operation = get_op_func(argv[2]);

    if (!operation)
    {
        printf("Error\n");
        return (99);
    }

    printf("%d\n", operation(num1, num2));
    return (0);
}

