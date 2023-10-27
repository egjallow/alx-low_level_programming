#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - returns 1 for true and false 0
 * @c: take in int as agr
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

