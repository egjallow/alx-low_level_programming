#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the actual value
 * @n: take in int as agr
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	return (-n);
}
