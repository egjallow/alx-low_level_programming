#include "main.h"
/**
 * _memcpy - is a function to set memory
 * @dest: is a adderss of a pointer
 * @src: is a sting of characters
 * @n: is the number on unsign
 * Return: a pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
