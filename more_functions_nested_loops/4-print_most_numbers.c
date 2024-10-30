#include "main.h"
/**
 * _isdigit - digit to return
 * @c: The character to print
 *
 *
 *
 */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != 2 && n != 4)
		{
		_putchar(n);
	}
	_putchar('\n');
}
}
