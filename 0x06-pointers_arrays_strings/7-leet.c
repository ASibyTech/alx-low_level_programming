#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str) {
    int i, j;
    char leet_table[] = {'a', 'e', 'o', 't', 'l'};
    char leet_replace[] = {'4', '3', '0', '7', '1'};

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < 5; j++) {
            if (str[i] == leet_table[j] || str[i] == leet_table[j] - 'a' + 'A') {
                str[i] = leet_replace[j];
                break;
            }
        }
    }

    return str;
}
