#include "main.h"
/**
 * _puts_recursion - it prints characters
 * @s: the string pointer
 */

void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
}
