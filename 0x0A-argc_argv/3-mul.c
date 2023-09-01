#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: totall value of argv
 * @argv: is a array of string
 * Return: it return an int ant prints a multi
 * of 2 num pass as  arg
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}

}
