#include "main.h"
/**
 * more_numbers - prints the numbers 1-14 x14
 * Return: Returns 0 if succefful
 */
void more_numbers(void)
{
	int i, j;

	i = 1;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j / 10 != 0)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		_putchar(10);
		i++;
	}
}
