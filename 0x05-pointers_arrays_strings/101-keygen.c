#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[100];
    int sum = 0;
    int random_char;
    int i;

    /* Seed the random number generator with the current time */
    srand(time(0));

    /* Generate a random password */
    for (i = 0; sum < 2772 - 122; ++i)
    {
        random_char = rand() % 62; /* 26 lowercase + 26 uppercase + 10 digits */
        if (random_char < 26)
            password[i] = 'a' + random_char;
        else if (random_char < 52)
            password[i] = 'A' + (random_char - 26);
        else
            password[i] = '0' + (random_char - 52);

        sum += password[i];
    }

    password[i] = 122 - (sum - 2772); /* Calculate the last character */

    printf("%s\n", password);

    return (0);
}

