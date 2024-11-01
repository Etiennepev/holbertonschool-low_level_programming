#include "main.h"
/**
 * _strlen - lenght of a strig
 *
 *
 *@s: l'endroit ou est la chaine de caracteres
 *Return: 1 or 0
 */

int _strlen(char *s)
{
	char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

	for (int i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	putchar('\n');
	return(0);
}
