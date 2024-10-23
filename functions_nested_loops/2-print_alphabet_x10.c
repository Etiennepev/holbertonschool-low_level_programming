#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - Affiche l'alphabet en lettres minuscules dix fois
*
* Return: Nothing
*/

void print_alphabet_x10(void)
{
	char c;
	int i;
for (i = 0; c <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
	_putchar (c);
}
	_putchar ('\n');
}
