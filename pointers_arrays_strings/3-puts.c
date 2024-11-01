#include "main.h"
/**
 * _puts - print a string
 *
 *@str: the string to print
 *
 */

void _puts(char *str)
{
	int i;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov\n";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
