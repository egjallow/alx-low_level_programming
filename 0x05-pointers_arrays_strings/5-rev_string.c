#include "main.h"
/**
 * rev_string - it reverse a string
 * @s: takes in string
 * Return: it returns 0 if successful
 */
void rev_string(char *s)
{
	char rev = s[0];
	int f = 0;
	int i;

	while (s[f] != '\0')
		f++;

	for (i = 0; i < f; i++)
	{
		f--;
		rev = s[i];
		s[i] = s[f];
		s[f] = rev;
	}
}
