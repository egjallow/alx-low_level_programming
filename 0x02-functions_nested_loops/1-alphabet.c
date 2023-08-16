#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always return (0)
 * Description:It prints alphabet a-z
 */
void print_alphabet(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i < 26)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
