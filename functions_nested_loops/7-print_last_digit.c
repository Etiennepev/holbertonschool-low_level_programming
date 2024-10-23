#include "main.h"
#include <stdio.h>

/**
*print_last_digit - prend le dernier chiffre d'un nombre
*sa valeur absolue
*
*@n: Le caractere a verifier
*Return: n si le caractere est positif et -n
*si il est negatif
*
*/

int print_last_digit(int n)
{
int lastdgt = n % 10;

return (lastdgt);
}
