#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * print_alphabet - Affiche l'alphabet en lettres minuscules
 * Cette fonction affiche toutes les lettres de
 * l'alphabet en lettre minuscules suivies d'un saut de ligne.
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
