#include "main.h"
/**
 * _strcmp - Is a string that concat
 * @s1: Teake in pointer of dest
 * @s2: Takes in src pointer
 * Return: it returns a pointer
*/
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && s2; ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (0);
}
