#include "main.h"
/**
 * string_toupper - Reverse the string in array
 * @c: Teake in pointer of dest
 * Return: converts lower case to upper
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] =  c[i] - 32;
		}
	}
	return (c);
}
