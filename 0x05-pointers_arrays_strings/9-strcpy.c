#include "main.h"
/**
 * _strcpy - copy a stc string to dest
 * @dest: is the destination arr
 * @src: src string
 * Return: 0 if successful
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
