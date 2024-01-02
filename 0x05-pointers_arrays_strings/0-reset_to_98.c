#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: A pointer to an integer.
 *
 * Return: void
 */
void reset_to_98(int *n)
{
    /* Check if the pointer is not NULL to avoid potential issues */
    if (n != NULL)
    {
        /* Update the value pointed to by the pointer to 98 */
        *n = 98;
    }
    else
    {
        /* Handle the case where the pointer is NULL (optional) */
        printf("Error: NULL pointer received\n");
    }
}

int main()
{
    int number = 402;

    /* Create a pointer to an int and initialize it with the address of the 'number' variable */
    int *ptr = &number;

    /* Display the value before the reset */
    printf("Before reset: %d\n", *ptr);

    /* Call the reset_to_98 function to update the value to 98 */
    reset_to_98(ptr);

    /* Display the value after the reset */
    printf("After reset: %d\n", *ptr);

    return 0;
}

