 #include "main.h"
/**
 * _atoi - Convert a string to integers
 *
 * @i: Use for the caractere
 * @debut: the begin of the conversion
 * @result: the result of the conversion
 * Return: Return an integers of the string or 0
 */

int _atoi(char *s)
{
	int i = 1;
	int result = 0;
	int debut = 0;

	while (*s)
	{
	if (*s == '-' && debut == 0)
	{
		sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		debut = 1;
		result * 10 + (*s - '0');
	}
	else if (debut)
	{
		break;
	}
	s++;
	}
	return debut * i;
