#include "main.h"
#include <stdio.h>
/**
* jack_bauer - Affiche l'alphabet en lettres minuscules dix fois
*
*
*/

void jack_bauer(void)
{
	int heures, minutes;

for (heures = 0; heures < 24; heures++)
{
for (minutes = 0; minutes < 59; minutes++)
	{
int a = (heures / 10);
int b = (heures % 10);
int c = (minutes / 10);
int d = (minutes % 10);
{
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(':')
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
}
}
}
