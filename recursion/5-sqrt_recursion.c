#include "main.h"

/**
 * sqrt_check - the calcul
 *
 * @n: perfect
 *@s: perfect
 * Return: good
 */

int sqrt_check(int n, int s)
{
	if (s * s > n)
	{
		return (-1);
	}
	if (s * s == n)
	{
		return (s);
	}
	return (sqrt_check(n, s + 1));
}

/**
 * _sqrt_recursion - the fonction where the result is
 *
 *@n: yes
 * Return: good
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (sqrt_check(n, 0));
}
