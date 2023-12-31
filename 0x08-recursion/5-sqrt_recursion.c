#include "main.h"

int sqr(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find square root of
 * Return: natural square root of number, if none return -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (sqr(n, 1));
	}
}

/**
 * sqr - checks square of number
 *
 * @a: first int that we are checking for square
 * @b: int checking for square
 * Return: int of square
 */
int sqr(int a, int b)
{
	if (a == 1)
		return (1);
	if (b > a / 2)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (sqr(a, b + 1));
}
