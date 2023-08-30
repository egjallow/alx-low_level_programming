#include <stdio.h>
#include "main.h"
/**
 * print_rev - return a string in reverse
 * @s: take in a pointer to a string
 * Return: it retun 0 if successful
 */
void print_rev(char *s)
{
	int i, j, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (j = (len - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
