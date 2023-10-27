#include "main.h"

/**
 * _strspn - function to count the number of characters
 * @s: string to count
 * @accept: string to
 * Return: the number of characters(integer)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len;

	for (len = 0; *s; s++, len++)
	{
		for (i = 0; accept[i] && *s != accept[i]; i++)
			;
		if (!accept[i])
			break;
	}

	return (len);
}
