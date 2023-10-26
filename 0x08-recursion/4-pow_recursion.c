#include "main.h"

/**
 * _pow_recursion - calculating power recursively
 * @x: is  base number
 * @y: is power number
 * Return: power number of x and y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
