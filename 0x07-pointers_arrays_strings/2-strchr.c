#include "main.h"
/**
 * _strchr - is a function that copy
 * @s: is a adderss of a pointer
 * @c: is a sting of characters
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
