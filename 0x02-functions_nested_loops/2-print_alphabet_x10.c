#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet a-z 10X
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	}
}

