#include "main.h"
/**
 * _memset - is a function to set memory
 * @s: is a adderss of a pointer
 * @b: is a sting of characters
 * @n: is the number on unsign
 * Return: a pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + 1) = b;
	}
	return (s);
}
