#include <stdio.h>
#include "main.h"
/**
 * main - is the entry of the program
 * Return: it retuns 0 if succesful
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
