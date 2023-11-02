#include "main.h"

/**
 * string_nconcat - string concatenation
 * @s1: first string
 * @s2: second string
 * @n: the number of characters to concat
 *
 * Return: the concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, a;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; *(s2 + j) != '\0'; j++)
			;
		if (n < j)
			j = n;
	}
	j += i;
	c = malloc(sizeof(char) * (j + 1));
	if (c == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		c[a] = *(s1 + a);
	for (i = 0; a < j; i++)
		c[a++] = *(s2 + i);
	c[a] = '\0';
	return (c);
}
