#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result can't be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int i, j, k, carry, sum;

    i = j = k = carry = sum = 0;

    while (n1[i] != '\0' || n2[j] != '\0' || carry) {
        sum = carry;

        if (n1[i] != '\0') {
            sum += (n1[i] - '0');
            i++;
        }

        if (n2[j] != '\0') {
            sum += (n2[j] - '0');
            j++;
        }

        if (k < size_r - 1) {
            r[k] = (sum % 10) + '0';
            k++;
        } else {
            return 0;  /* Result can't be stored in the buffer */
        }

        carry = sum / 10;
    }

    r[k] = '\0';
    return r;
}
