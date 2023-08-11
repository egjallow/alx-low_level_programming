#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints numbers
 * Return: 0
 */
int main(void)
{
	int a;

	a = 49;
	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
