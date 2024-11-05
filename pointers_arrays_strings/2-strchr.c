 #include "main.h"
/**
 * *_strchr -
 *
 * @s: the string we search
 * @c: the caractere to find in the string s
 *
 * Return: return NULL if no caractere found and return in s 
 */

char *_strchr(char *s, char c)
{
    int i = 0;


	while (s[i] != '\0') 
	{
		if (s[i] == c) 
	{
		return &s[i];
	}
		i++;
	}
	if (c == '\0')
	{
        	return &s[i];
	}
	return NULL;
}
