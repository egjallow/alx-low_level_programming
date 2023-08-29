#include "main.h"
/**
 * _puts - return a string with a new line
 * @str: take in a pointer to a string
 * Return: it retun 0 if successful
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
