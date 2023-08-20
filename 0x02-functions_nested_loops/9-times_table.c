#include "main.h"

/**
 * times_table - Prints the 9 times table
 * main - Entry point of the program
 * _putchat: print a character
 * Return: Always return (0);
 */

void times_table(void)
{
	int row, col, results;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			results = row * col;
			if (col == '0')
			{
				_putchar('0');
			} else if (results < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(results + '0');
			} else
			{
				_putchar(' ');
				_putchar(results / 10 + '0');
				_putchar(results % 10 + '0');
			}
			if (col < 9)
				_putchar(',');
		}
		_putchar('\n');
	}

}
