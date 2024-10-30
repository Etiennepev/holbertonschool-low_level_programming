#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints numbers from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int n;
	int num;

	for (n = 0; n < 10; n++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
				_putchar(num % 10 + '0');
		}
	_putchar('\n');
	}
}
