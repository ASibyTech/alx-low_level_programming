#include "main.h"

/**
  * factorial - Returns the factorial
  * @n: The number for which
  * Return: The factorial of n
  */

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}

	if (n == 0 || n == 1)
	{
		return 1;
	}

	return n * factorial(n - 1);
}
