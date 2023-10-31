#include "main.h"

/**
 * str_concat - Concatenate two strings
 * @s1: input string
 * @s2: output string
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (k = 0; *(s2 + k) != '\0'; k++)
		;
	c = malloc(i + k + 1);
	if (c == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		c[i] = *(s1 + i);
	for (k = 0; *(s2 + k) != '\0'; k++)
		c[i + k] = *(s2 + k);
	c[i + k] = *(s2 + k);
	return (c);
}
