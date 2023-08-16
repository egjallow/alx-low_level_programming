#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet a-z
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i < 26)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
