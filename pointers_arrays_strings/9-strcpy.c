 #include "main.h"
/**
 * *_strcpy - copy a string
 *
 * @dest: the copy have to be there
 * @src: the original
 *
 * Return: the dest result
 */

char *_strcpy(char *dest, char *src)
{
	char *nv_dest = dest

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (nv_dest);
}
