#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints alphabets(a-zA-Z)
 * Return: 0
 */
int main(void)
{
	int a,c;

	a = 97;
	while (a <= 122)
	{
		putchar(a);
		a++;
	}

        c = 65;

	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
