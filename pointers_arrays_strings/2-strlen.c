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
	int len = 0;
	int i;

	for (int i = 0; s[i] != '\0'; i++)
	{
	len++;
	}
	return (len);
}
