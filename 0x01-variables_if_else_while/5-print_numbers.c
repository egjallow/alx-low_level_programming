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

	a = 97;
	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
