 #include "main.h"
/**
 * *_strspn - count specific caractere
 *
 * @s: the string to analyse
 * @accept: the string with correct words
 *
 * Return: the caractere of s who are in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found++;
				count++;
				break;
			}
		}
	if (!found)
	{
		break;
	}
	}
	return (count);
}
