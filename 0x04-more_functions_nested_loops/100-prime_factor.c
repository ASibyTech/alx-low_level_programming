#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
    long max_prime = -1;

    // Divide by 2 until it becomes an odd number
    while (n % 2 == 0)
    {
        max_prime = 2;
        n /= 2;
    }

    // Divide by odd numbers starting from 3
    for (long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            max_prime = i;
            n /= i;
        }
    }

    // If n becomes a prime number greater than 2
    if (n > 2)
        max_prime = n;

    return max_prime;
}

/**
 * main - Entry point, prints the largest prime factor of 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
    long n = 612852475143;
    long result = largest_prime_factor(n);

    printf("%ld\n", result);

    return (0);
}

