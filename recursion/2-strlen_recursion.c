#include "main.h"

/**
 * _strlen_recursion - make a loop with recursion
 *
 *@s: the string we what to print
 *
 * Return: lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
