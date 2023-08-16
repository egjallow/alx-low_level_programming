#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - returns 1 for true and false 0
 * @n: take in int as agr
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
