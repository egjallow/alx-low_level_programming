#include "main.h"
/**
 * print_line - Print _ to draw a line
 * @n: it takes in int
 * Return: It will return 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
