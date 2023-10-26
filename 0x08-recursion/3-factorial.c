#include "main.h"

/**
 * factorial - calculate factorial of a number
 * @n: number
 * Return: factorial of a number(n)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
