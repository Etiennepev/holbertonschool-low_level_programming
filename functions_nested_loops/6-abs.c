#include "main.h"
#include <stdio.h>

/**
*_abs - prend un entier comme argument et renvoie
*sa valeur absolue
*
*@n: Le caractere a verifier
*Return: n si le caractere est positif et -n
*si il est negatif
*
*/

int _abs(int n)
{
	if (n > 0)
{
	return (n);
}
	else
{
	return (-n);
}
}
