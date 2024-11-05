 #include "main.h"
/**
 * *_memset - stock memory
 *
 * @s: pointeur
 * @b: char
 * @n: nombres d'iterations
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		i++;
		s[i] = b;
	}
	return (s);
}
