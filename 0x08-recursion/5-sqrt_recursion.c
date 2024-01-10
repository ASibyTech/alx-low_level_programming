#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)  /* If n is negative, return -1 to indicate an error */
		return -1;

	return find_sqrt(n, 0);  /* Call a helper function to find the square root */
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, returns -1.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)  /* Base case: if the square of the guess is equal to n */
		return guess;

	if (guess * guess > n)  /* If the square of the guess is greater than n, n does not have a natural square root */
		return -1;

	return find_sqrt(n, guess + 1);  /* Recursive call to find the square root with the next guess */
}
