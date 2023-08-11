#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints alphabets except q,e
 * Return: 0
 */
int main(void)
{
	char alpa = 'a';

	while (alpa <= 'z')
	{
		if (alpa != 'e' && alpa != 'q')
			putchar(alpa);
		alpa++;
	}
	putchar(10);
	return (0);
}
