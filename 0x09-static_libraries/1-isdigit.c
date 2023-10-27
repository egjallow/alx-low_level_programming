#include "main.h"
/**
 * _isdigit - Check if the arg passed is an integer
 * @c: the argument is an int
 * Return: return 0/1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
