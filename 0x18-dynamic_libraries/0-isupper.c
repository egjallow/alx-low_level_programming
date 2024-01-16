#include "main.h"
/**
 * _isupper - a functiocn tha returns 1 if arg c is int
 * or return 0 if arg is false
 * @c: takes an int as arg
 * Return: returns a int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
