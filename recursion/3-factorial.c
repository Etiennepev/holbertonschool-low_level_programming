#include "main.h"

/**
 * factorial - multiply the given number
 *
 *@n: the number to multiply
 * Return: return
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
