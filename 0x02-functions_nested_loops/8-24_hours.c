#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Returns a valve of the last
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 24; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}	}
}
