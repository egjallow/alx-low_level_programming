#include "main.h"
/**
 * print_numbers - print a numbers from 0-9
 * Return: Return 0
 * Description: it prints a char a - z
 */
void print_numbers(void)
{
	int i;
	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
