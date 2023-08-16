#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always return (0)
 * Description:It prints _putchar
 */
int main(void)
{
	char c[8] = "_putchar";
	int i;

	i =0;
	while(i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
