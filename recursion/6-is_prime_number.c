#include "main.h"

/**
 * check_primen - nicee
 *
 * @y: perfect
 * @n: perfect
 * Return: good
 */

int check_primen(int n, int y)
{
	if (n >= y)
	{
	if (n % y == 0)
	{
		return (0);
	}
	if (y * y > n)
	{
		return (1);
	}
	else if (n % y != 0)
	{
		return (check_primen(n, y + 1));
	}
	}
	return (0);
}

/**
 * is_prime_number - nice
 *
 *@n: yes
 * Return: good
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
	return (1);
	}
	else if	(n > 2)
	{
		int y = 2;

		return (check_primen(n, y + 1));
	}
	return (0);
}
