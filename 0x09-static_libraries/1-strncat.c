#include "main.h"
/**
 * _strncat - Is a string that concat
 * @dest: Teake in pointer of dest
 * @src: Takes in src pointer
 * @n: takes in int as an arg
 * Return: it returns 0 if succesful
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
