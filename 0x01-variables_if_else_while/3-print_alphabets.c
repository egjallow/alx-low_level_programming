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
	int a;

	a = 97;
	while (a <= 122)
	{
		putchar(a);
		a++;
	}

	char c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
