#include "main.h"
/**
 * _isupper - check for the uppercase
 * @c: The character to print
 *
 * Return: 1 if uppercase else 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
