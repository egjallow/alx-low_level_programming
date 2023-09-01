#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: totall value of argv
 * @argv: is a array of string
 * Return: it return an int ant prints a add
 * of 2 num pass as  arg
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
			sum = sum + atoi(argv[i]);

		printf("%d\n", sum);
		return (0);
	}

}
