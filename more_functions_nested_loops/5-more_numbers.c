#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers from 0 to 9
 *
 *
 */
void more_numbers(void)
{
	int n;
	int num;

	for (n = 0; n <= 9; n++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
		}
	_putchar('\n');
	}
}
