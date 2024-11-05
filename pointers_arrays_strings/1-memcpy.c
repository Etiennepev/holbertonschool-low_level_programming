 #include "main.h"
/**
 * *_memset - stock memory
 *
 * @dest: place to copy 
 * @src: original
 * @n: nombres d'iterations
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;

	while (i < n)
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
