#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)  /* If the number is less than or equal to 1, it's not prime */
		return 0;

	return check_prime(n, 2);  /* Call a helper function to check for primality, starting with divisor 2 */
}

/**
 * check_prime - Helper function to check for primality recursively.
 * @n: The number to check.
 * @divisor: The current divisor to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
	if (divisor > n / 2)  /* Base case: if the divisor is greater than half of n, n is prime */
		return 1;

	if (n % divisor == 0)  /* If n is divisible by the current divisor, it's not prime */
		return 0;

	return check_prime(n, divisor + 1);  /* Recursive call to check with the next divisor */
}
