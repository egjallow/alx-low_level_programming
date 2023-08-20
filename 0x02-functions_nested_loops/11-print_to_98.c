#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbert upto 98
 * @n: Takes an integer aas arg
 * Return: It returns an void
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
	while (n >= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n--;
	}
	}
	else
	{
		while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}
	}
	printf("\n");
}
