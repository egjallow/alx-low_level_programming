#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints alphabets Reverse
 * Return: 0
 */
int main(void)
{
	int a;

	a = 122;
	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
