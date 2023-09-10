#include "main.h"
/**
 * _strchr - is a function that copy
 * @s: is a adderss of a pointer
 * @c: is a sting of characters
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
