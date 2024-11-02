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
	int moit;

	while (str[a] != '\0')
	{
		a++;
	}

	moit = a / 2;

	if (a % 2 == 1)
	{
		moit++;
	}
	while (moit < a)
	{
		_putchar(str[moit]);
		moit++;
	}
	_putchar('\n');
}
