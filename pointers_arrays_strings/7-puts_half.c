 #include "main.h"
/**
 * puts_half - take the half of a string
 *
 * @str: The string who will be pair or impair
 *
 */

void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	else if (a % 1 == 0)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
