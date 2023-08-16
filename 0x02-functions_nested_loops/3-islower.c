#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _islower - prints alphabet a-z 10X
 * @c: take in int as agr
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

