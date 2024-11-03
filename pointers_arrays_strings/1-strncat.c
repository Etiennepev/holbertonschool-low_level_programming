 #include "main.h"
/**
 * *_strcpy - copy a string
 *
 * @dest: 
 * @src: 
 * @n: 
 *
 * Return: the dest result
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[i] = src[count];
		i++;
	}
	if (count < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
