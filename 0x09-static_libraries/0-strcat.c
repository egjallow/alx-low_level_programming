#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: String of destination
 * @src: the source string
 * Return: the concart string
 */
char *_strcat(char *dest, char *src)
{
	char *return_string = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (return_string);
}
