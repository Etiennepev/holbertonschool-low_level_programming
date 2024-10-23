#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Vérifie si un caractère est en minusculou majuscule
 *
 *@c: Le caractere a verifier
 * Return: 1 si le caractère est en minuscule, 0 sinon
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
	return (1);
}
	else
{
	return (0);
}
}
