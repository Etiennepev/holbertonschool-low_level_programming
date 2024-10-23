#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Affiche l'alphabet en lettres minuscules
*
* Return: Nothing
*/

void print_alphabet(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
{
	_putchar (c);
}
	_putchar ('\n');
}
