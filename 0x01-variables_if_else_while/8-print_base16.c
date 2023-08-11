#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints Hex base 16
 * Return: 0
 */
int main(void)
{
	int a, n;

	a = 97;
	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
