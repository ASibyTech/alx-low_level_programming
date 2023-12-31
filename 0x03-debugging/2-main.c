#include <stdio.h>
#include "main.h"

/**
* main - affiche le plus grand des 3 entiers
* Return: 0
*/

int main(void)
{
    int a, b, c;
    int largest;

    a = 972;
    b = -98;
    c = 0;

    largest = largest_number(a, b, c);

    printf("%d est le plus grand nombre\n", largest);

    return (0);
}
